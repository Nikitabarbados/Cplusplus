#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

//enum Color : short {
//    BLACK, DARKBLUE, DARKGREEN, TURQUOISE, DARKRED,
//    PURPLE, DARKYELLOW, GREY, DARKGREY, BLUE, GREEN,
//    CYAN, RED, PINK, YELLOW, WHITE
//};

// 1 параметр
// 2 параметра + return
// курсор
// прототипы

// function definition (проголошення, створення, реалізація функції)
//void say_hello() {
//    cout << "Hello!\n";
//    cout << "This is a C++ function.\n";
//    cout << "END OF FUNCTION. GOOD BYE!\n";
//}

// приклад функції з 1 параметром 
//void say_hello_to_someone(string name) { // name - параметр
//    cout << "Hello, " << name << "!\n";
//    cout << "How are you?\n";
//}

// створення псевдоніму для типу
//typedef unsigned short ushort;

//void draw_rectangle(ushort width, ushort height, char symbol, Color color) {
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(h, color);
//    for (ushort y = 0; y < height; y++)
//    {
//        for (ushort x = 0; x < width; x++)
//        {
//            cout << symbol;
//        }
//        cout << "\n";
//    }
//    /*cout << "\n\n";*/
//}

//void printXY(int x, int y, int color, string text) {
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//    COORD position;
//    position.X = x;
//    position.Y = y;
//    SetConsoleCursorPosition(h, position);
//    SetConsoleTextAttribute(h, color);
//    cout << text;
//}
//
//int main()
//{
//    printXY(4, 0, 4, "Nikita");
//    printXY(10, 3, 2, "Studying ");
//    printXY(7, 6, 1, "Somewhere");
//}


// тип результату назва(параметри через кому)
//int suma(int first, int second) { // first, second - параметри
//	return first + second; // return - повертає значення з функції
//
//}
// якщо функція не використовує сіАут то вона універсальна
// для перенесення на інші платформи та типи додатків
// таку фунція можна використовувати повторно не лише в терміналі
// а й в десктопних рішеннях (вікна на робочому столі )веб-сайт

// клієнтська частина (клієнт тут - це ми, програмісти)
// 
//int main() { 
//	suma(10, 15);
//	cout << suma(20, 30) << "\n"; // ok
//	int result = suma(50, 70); // ok
//	cout << "...............\n";
//	cout << result << "\n";
//}

// процедура - це функція, яка НІЧОГО не повертає (позначена як void)
/*void suma(int first, int second) {
	cout << first + second << "\n";
}

int main() {
	suma(10, 15); */// процедури викликаються ЛИШЕ так
	// cout << suma(20, 30) << "\n"; // помилка!!!
	// int result = suma(50, 70); // помилка!!!

//int first, int second - сигнатура (підпис функції)
//int suma(int first, int second) {
//	return first + second;
//}
//
//int main() {
//	cout << suma(suma(20, suma(70, 50)), suma(20, 30)) << "\n"; // ок
//
//}
