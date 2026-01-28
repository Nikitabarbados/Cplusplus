//проблема:
//
//в С++ функція може викликати лише ту іншу функцію, що знаходиться ВИЩЕ по коду

//#include <iostream> // 1) бібліотеки
//#include <windows.h>
//#include <iomanip>
//#include <string>
//#include <vector>
//#include <list>
//
//#include <conio.h> 
//using namespace std;

#include "FileName.h"

const int WIDTH = 15;
const int HEIGHT = 5;

void random_fill_array2D(int ar[][WIDTH], const int WIDTH, const int HEIGHT, int min, int max) {
	int k = max - min + 1;
	for (int y = 0; y < HEIGHT; y++)
		for (int x = 0; x < WIDTH; x++)
			ar[y][x] = rand() % k + min;
}

void print_array2D(int ar[][WIDTH], const int WIDTH, const int HEIGHT) {
	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++)
			cout << ar[y][x] << "\t";
		cout << "\n";
	}
}

int main() {
	int ar[HEIGHT][WIDTH];

	random_fill_array2D(ar, WIDTH, HEIGHT, 0, 15);
	print_array2D(ar, WIDTH, HEIGHT);
}

//void random_fill_array(int ar[], const int SIZE, int min, int max) {
//	int k = max - min + 1;
//	for (int i = 0; i < SIZE; i++)
//		ar[i] = rand() % k + min;
//}
//
//void user_fill_array(int ar[], const int SIZE) {
//	for (int i = 0; i < SIZE; i++) {
//		cout << "Please, set element by index " << i << ": ";
//		cin >> ar[i];
//	}
//}
//
//void print_array(int ar[], const int SIZE) {
//	for (int i = 0; i < SIZE; i++)
//		cout << ar[i] << ", ";
//	cout << "\n";
//}
//
//int main() {
//	const int SIZE = 15;
//	int ar[SIZE];
//	random_fill_array(ar, SIZE, 0, 15);
//	// user_fill_array(ar, SIZE);
//	print_array(ar, SIZE);
//}

//int calculator(int a, char operation, int b) {
//	if (operation == '+')
//		return a + b;
//	if (operation == '-')
//		return a - b;
//	if (operation == '^')
//		return pow(a, b);
//	if (operation == '*')
//		return a * b;
//}
//
//int main() {
//	cout << calculator(2, '+', 3) << "\n"; // 5
//	cout << calculator(2, '^', 3) << "\n"; // 8
//}
// бувають функійй які явно мають повертати значення в них ТЗЩП не void  але реторну в них все одно нема

//void change(int x) {
//	x++;
//}
//
//int main() {
//	int test = 10;
//	cout << test << "\n"; // 10
//	change(test);
//	cout << test << "\n"; // 11
//	change(test);
//	cout << test << "\n"; // 12
//}

// 2) глобальні перерахування enum
//enum Color
//{
//	Black = 0,
//	Blue = 1,
//	Green = 2,
//	Cyan = 3,
//	Red = 4,
//	Purple = 5,
//	Yellow = 6,
//	White = 7
//};

// 3) прототипи функцій
//void Line(int size, char symb, int color, bool direction);
//void save_file();
//void new_game();
//void menu();
//void intro();
//int main();

// 4) точка входу мейн
//int main() {
//	intro();
	// Line(25, '@', 12, false);
	// Line(25, '#', 14, false);
	// Line(25, '%', 10, false);
//}

// 5) всі інші функції

//void Line(int size, char symb, int color, bool direction)
//{
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleTextAttribute(h, color);
//	for (int i = 0; i < size; i++)
//	{
//		cout << symb;
//		if (direction) cout << "\n";
//	}
//	SetConsoleTextAttribute(h, 15);
//}
//
//void save_file() {
//	cout << "SAVING...\n";
//	menu();
//}
//
//void new_game() {
//	cout << "NEW GAME\n";
//	save_file();
//}
//
//void menu() {
//	cout << "MENU\n";
//	new_game();
//}
//
//void intro() {
//	cout << "ZASTAVKA\n";
//	menu();
//}

//int main() {
//	// cout << local << "\n";
//
//	int local = 10;
//	cout << local << "\n";
//
//	if (true) {
//		int local = 15;
//		cout << local << "\n"; // 15
//	} // при виході з області видимості, змінні що були створені в цій області, перестають існувати
//	cout << local << "\n"; // 15
//}

//int global = 30;
//
//void test() {
//	int local = 20;
//	cout << local << "\n"; // 20
//	cout << &local << "\n"; // адреса
//} // при виході з функції, всі локальні змінні, що створені всередині цієї ф-ції, перестають існувати
//
//int main() {
//	int local = 10; // локальна змінна функції мейн
//	cout << local << "\n"; // 10
//	cout << &local << "\n"; // адреса
//	test();
//	cout << local << "\n";
//}

//void test() {
//	static int local = 0; // змінна з локальною областю видимості, але зберігає своє значення між викликами функції
//	local++; // 1
//	cout << local << "\n"; // 1
//} 
//
//int main() {
//	test(); // 1
//	test();	// 1
//	test();	// 1
//}