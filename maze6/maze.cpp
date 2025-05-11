#include "maze.h"
#include <iostream>

using namespace std;

void hideCursor(HANDLE h) {
    CONSOLE_CURSOR_INFO cursor;
    cursor.bVisible = false;
    cursor.dwSize = 100;
    SetConsoleCursorInfo(h, &cursor);
}

void generateMap(int map[HEIGHT][WIDTH]) {
    srand(time(0));
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            map[y][x] = rand() % 4;

            if (x == 0 || y == 0 || x == WIDTH - 1 || y == HEIGHT - 1)
                map[y][x] = GameObject::WALL;

            if ((x == 0 && y == 2) || (x == 1 && y == 2) || (x == 2 && y == 2) ||
                (x == WIDTH - 1 && y == HEIGHT - 3) ||
                (x == WIDTH - 2 && y == HEIGHT - 3) ||
                (x == WIDTH - 3 && y == HEIGHT - 3))
                map[y][x] = GameObject::HALL;

            if (map[y][x] == GameObject::ENEMY) {
                if (rand() % 10 != 0)
                    map[y][x] = GameObject::HALL;
            }
        }
    }
}

void drawMap(HANDLE h, int map[HEIGHT][WIDTH]) {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            switch (map[y][x]) {
                case GameObject::HALL:
                    SetConsoleTextAttribute(h, Color::BLACK);
                    cout << " ";
                    break;
                case GameObject::WALL:
                    SetConsoleTextAttribute(h, Color::DARKGREEN);
                    cout << (char)178;
                    break;
                case GameObject::COIN:
                    SetConsoleTextAttribute(h, Color::YELLOW);
                    cout << ".";
                    break;
                case GameObject::ENEMY:
                    SetConsoleTextAttribute(h, Color::RED);
                    cout << "O";
                    break;
            }
        }
        cout << "\n";
    }
}

void drawHero(HANDLE h, COORD hero) {
    SetConsoleCursorPosition(h, hero);
    SetConsoleTextAttribute(h, Color::BLUE);
    cout << "O";
}

void showCoins(HANDLE h, int coins) {
    COORD pos;
    pos.X = WIDTH + 1;
    pos.Y = 0;
    SetConsoleCursorPosition(h, pos);
    SetConsoleTextAttribute(h, Color::DARKYELLOW);
    cout << "COINS: ";
    SetConsoleTextAttribute(h, Color::YELLOW);
    cout << coins;
}