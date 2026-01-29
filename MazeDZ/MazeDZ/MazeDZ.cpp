#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

int main()
{
    enum MazeObject { HALL, WALL, COIN, ENEMY, BORDER, MEDKIT, COFFEE };
    enum Color { DARKGREEN = 2, YELLOW = 14, RED = 12, BLUE = 9, WHITE = 15, DARKYELLOW = 6, DARKRED = 4 };
    enum KeyCode { ENTER = 13, ESCAPE = 27, SPACE = 32, LEFT = 75, RIGHT = 77, UP = 72, DOWN = 80 };

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    // настройки шрифта консоли
    CONSOLE_FONT_INFOEX font;
    font.cbSize = sizeof(font);
    font.dwFontSize.Y = 70;
    font.FontFamily = FF_DONTCARE;
    font.FontWeight = FW_NORMAL;
    wcscpy_s(font.FaceName, 9, L"Consolas");
    SetCurrentConsoleFontEx(h, 0, &font);

    // скрытие мигающего курсора 
    CONSOLE_CURSOR_INFO cursor;
    cursor.bVisible = false;
    cursor.dwSize = 1;
    SetConsoleCursorInfo(h, &cursor);

    system("title Maze");
    MoveWindow(GetConsoleWindow(), 20, 60, 1850, 900, true);

    srand(time(0));

    const int WIDTH = 40;
    const int HEIGHT = 10;

    int maze[HEIGHT][WIDTH] = {};
    int totalCoins = 0;

    // заполнение лабиринта
    for (int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            maze[y][x] = rand() % 4;

            if (maze[y][x] == MazeObject::ENEMY)
            {
                int probability = rand() % 15;
                if (probability != 0) maze[y][x] = MazeObject::HALL;
            }

            if (maze[y][x] == MazeObject::WALL)
            {
                int probability = rand() % 2;
                if (probability != 0) maze[y][x] = MazeObject::HALL;
            }

            if (x == 0 || y == 0 || x == WIDTH - 1 || y == HEIGHT - 1)
                maze[y][x] = MazeObject::BORDER;

            if (x == 0 && y == 2 || x == 1 && y == 2 || x == 2 && y == 2)
                maze[y][x] = MazeObject::HALL;

            if (x == WIDTH - 1 && y == HEIGHT - 3 ||
                x == WIDTH - 2 && y == HEIGHT - 3 ||
                x == WIDTH - 3 && y == HEIGHT - 3)
                maze[y][x] = MazeObject::HALL;

            if (maze[y][x] == MazeObject::COIN) totalCoins++;

            // случайные медкиты
            if (rand() % 40 == 0 && maze[y][x] == MazeObject::HALL)
                maze[y][x] = MazeObject::MEDKIT;

            // случайная кофе
            if (rand() % 50 == 0 && maze[y][x] == MazeObject::HALL)
                maze[y][x] = MazeObject::COFFEE;
        }
    }

    // показ лабиринта
    for (int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            switch (maze[y][x])
            {
            case MazeObject::HALL:
                cout << " ";
                break;
            case MazeObject::WALL:
                SetConsoleTextAttribute(h, Color::DARKGREEN);
                cout << (char)178;
                break;
            case MazeObject::BORDER:
                SetConsoleTextAttribute(h, Color::WHITE);
                cout << (char)178;
                break;
            case MazeObject::COIN:
                SetConsoleTextAttribute(h, Color::YELLOW);
                cout << ".";
                break;
            case MazeObject::ENEMY:
                SetConsoleTextAttribute(h, Color::RED);
                cout << (char)1;
                break;
            case MazeObject::MEDKIT:
                SetConsoleTextAttribute(h, Color::WHITE);
                cout << "+";
                break;
            case MazeObject::COFFEE:
                SetConsoleTextAttribute(h, Color::DARKYELLOW);
                cout << "C";
                break;
            }
        }
        cout << "\n";
    }

    /////////////////////////////////////////////////////////////////////
    COORD position;
    position.X = 0;
    position.Y = 2;
    SetConsoleCursorPosition(h, position);
    SetConsoleTextAttribute(h, Color::BLUE);
    cout << (char)2;

    int coins = 0;
    int health = 100;
    int energy = 500;
    int movesSinceCoffee = 100;

    /////////////////////////////////////////////////////////////////////
    COORD infobox;
    infobox.X = WIDTH + 1;
    infobox.Y = 1;
    SetConsoleCursorPosition(h, infobox);
    SetConsoleTextAttribute(h, Color::DARKYELLOW);
    cout << "COINS: ";
    SetConsoleTextAttribute(h, Color::YELLOW);
    cout << coins << "\n";

    infobox.Y = 2;
    SetConsoleCursorPosition(h, infobox);
    SetConsoleTextAttribute(h, Color::DARKRED);
    cout << "HEALTH: ";
    SetConsoleTextAttribute(h, Color::RED);
    cout << health << "\n";

    infobox.Y = 3;
    SetConsoleCursorPosition(h, infobox);
    SetConsoleTextAttribute(h, Color::BLUE);
    cout << "ENERGY: ";
    SetConsoleTextAttribute(h, Color::WHITE);
    cout << energy << "\n";

    /////////////////////////////////////////////////////////////////////
    while (true)
    {
        if (_kbhit())
        {
            int code = _getch();
            if (code == 224) code = _getch();

            // стираем старого героя
            SetConsoleCursorPosition(h, position);
            cout << " ";

            if (code == KeyCode::ENTER || code == KeyCode::ESCAPE) exit(0);

            else if (code == KeyCode::LEFT
                && maze[position.Y][position.X - 1] != MazeObject::WALL
                && maze[position.Y][position.X - 1] != MazeObject::BORDER)
                position.X--;

            else if (code == KeyCode::RIGHT
                && maze[position.Y][position.X + 1] != MazeObject::WALL
                && maze[position.Y][position.X + 1] != MazeObject::BORDER)
                position.X++;

            else if (code == KeyCode::UP
                && maze[position.Y - 1][position.X] != MazeObject::WALL
                && maze[position.Y - 1][position.X] != MazeObject::BORDER)
                position.Y--;

            else if (code == KeyCode::DOWN
                && maze[position.Y + 1][position.X] != MazeObject::WALL
                && maze[position.Y + 1][position.X] != MazeObject::BORDER)
                position.Y++;

            // каждый шаг - минус энергия
            energy--;
            movesSinceCoffee++;

            if (energy <= 0)
            {
                MessageBoxA(0, "Поразка енергія закінчилася!", "FAIL!", 0);
                system("cls");
                exit(0);
            }

            infobox.X = WIDTH + 1;
            infobox.Y = 3;
            SetConsoleCursorPosition(h, infobox);
            SetConsoleTextAttribute(h, Color::BLUE);
            cout << "ENERGY: ";
            SetConsoleTextAttribute(h, Color::WHITE);
            cout << energy << "   \n";

            // показ героя
            SetConsoleCursorPosition(h, position);
            SetConsoleTextAttribute(h, Color::BLUE);
            cout << (char)2;

            //////////////////////////////////////////////////////////////
            // выход
            if (position.Y == HEIGHT - 3 && position.X == WIDTH - 1)
            {
                MessageBoxA(0, "Перемога знайдено вихід!", "WIN!", 0);
                system("cls");
                exit(0);
            }

            // монетки
            if (maze[position.Y][position.X] == MazeObject::COIN)
            {
                coins++;
                totalCoins--;
                infobox.X = WIDTH + 1;
                infobox.Y = 1;
                SetConsoleCursorPosition(h, infobox);
                SetConsoleTextAttribute(h, Color::DARKYELLOW);
                cout << "COINS: ";
                SetConsoleTextAttribute(h, Color::YELLOW);
                cout << coins << "\n";
                maze[position.Y][position.X] = MazeObject::HALL;

                if (totalCoins == 0)
                {
                    MessageBoxA(0, "Перемога монети зібрано!", "WIN!", 0);
                    system("cls");
                    exit(0);
                }
            }

            // враги
            if (maze[position.Y][position.X] == MazeObject::ENEMY)
            {
                health -= 20;
                infobox.X = WIDTH + 1;
                infobox.Y = 2;
                SetConsoleCursorPosition(h, infobox);
                SetConsoleTextAttribute(h, Color::DARKRED);
                cout << "HEALTH: ";
                SetConsoleTextAttribute(h, Color::RED);
                cout << health << " \n";
                maze[position.Y][position.X] = MazeObject::HALL;

                if (health <= 0)
                {
                    MessageBoxA(0, "Поразка здоров'я закінчилося!", "FAIL!", 0);
                    system("cls");
                    exit(0);
                }
            }

            // медкиты
            if (maze[position.Y][position.X] == MazeObject::MEDKIT)
            {
                if (health < 100)
                {
                    health += 25;
                    if (health > 100) health = 100;

                    infobox.X = WIDTH + 1;
                    infobox.Y = 2;
                    SetConsoleCursorPosition(h, infobox);
                    SetConsoleTextAttribute(h, Color::DARKRED);
                    cout << "HEALTH: ";
                    SetConsoleTextAttribute(h, Color::RED);
                    cout << health << " \n";

                    maze[position.Y][position.X] = MazeObject::HALL;
                }
            }

            // кофе
            if (maze[position.Y][position.X] == MazeObject::COFFEE)
            {
                if (movesSinceCoffee >= 10)
                {
                    energy += 25;
                    movesSinceCoffee = 0;

                    infobox.X = WIDTH + 1;
                    infobox.Y = 3;
                    SetConsoleCursorPosition(h, infobox);
                    SetConsoleTextAttribute(h, Color::BLUE);
                    cout << "ENERGY: ";
                    SetConsoleTextAttribute(h, Color::WHITE);
                    cout << energy << "   \n";

                    maze[position.Y][position.X] = MazeObject::HALL;
                }
            }
        }
        else
        {
            Sleep(15);
        }
    }
}
