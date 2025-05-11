#include <iostream>
#include <conio.h>
#include <windows.h>
#include "maze.h"

using namespace std;

int main() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    system("title Maze Game");

    hideCursor(h);

    int map[HEIGHT][WIDTH];
    generateMap(map);
    drawMap(h, map);

    COORD hero = {0, 2};
    drawHero(h, hero);

    int coins_collected = 0;
    showCoins(h, coins_collected);

    while (true) {
        int code = _getch();
        if (code == 224) code = _getch();

        COORD old_pos = hero;
        bool moved = false;

        switch (code) {
            case Key::LEFT:
                if (hero.X > 0 && map[hero.Y][hero.X - 1] != GameObject::WALL) {
                    hero.X--; moved = true;
                } break;
            case Key::RIGHT:
                if (map[hero.Y][hero.X + 1] != GameObject::WALL) {
                    hero.X++; moved = true;
                } break;
            case Key::UP:
                if (map[hero.Y - 1][hero.X] != GameObject::WALL) {
                    hero.Y--; moved = true;
                } break;
            case Key::DOWN:
                if (map[hero.Y + 1][hero.X] != GameObject::WALL) {
                    hero.Y++; moved = true;
                } break;
        }

        if (moved) {
            SetConsoleCursorPosition(h, old_pos);
            SetConsoleTextAttribute(h, Color::BLACK);
            cout << " ";
            drawHero(h, hero);
        }

        if (map[hero.Y][hero.X] == GameObject::COIN) {
            coins_collected++;
            map[hero.Y][hero.X] = GameObject::HALL;
            showCoins(h, coins_collected);
        }

        if (map[hero.Y][hero.X] == GameObject::ENEMY) {
            cout << "\nGAME OVER!";
            break;
        }
    }

    Sleep(INFINITE);
    return 0;
}