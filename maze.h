#include <windows.h>

const int HEIGHT = 25;
const int WIDTH = 65;

enum GameObject : short { HALL, WALL, COIN, ENEMY };
enum Color : short {
    BLACK, DARKBLUE, DARKGREEN, TURQUOISE, DARKRED,
    PURPLE, DARKYELLOW, GREY, DARKGREY, BLUE, GREEN,
    CYAN, RED, PINK, YELLOW, WHITE
};
enum Key : short {
    LEFT = 75, RIGHT = 77, UP = 72, DOWN = 80,
    ENTER = 13, SPACE = 32, ESCAPE = 27, BACKSPACE = 8
};

void hideCursor(HANDLE h);
void generateMap(int map[HEIGHT][WIDTH]);
void drawMap(HANDLE h, int map[HEIGHT][WIDTH]);
void drawHero(HANDLE h, COORD hero);
void showCoins(HANDLE h, int coins);