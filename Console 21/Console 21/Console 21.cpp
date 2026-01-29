#include <iostream>
#include <windows.h>
#include <conio.h>
#include <algorithm>
#include <string>
#include <vector>
#include <ctime>
#include <typeinfo>
#include <io.h>
using namespace std;

//-----------------------------------------------------------

//int main()
//{
//	int day = 13;
//	int month = 5;
//	int year = 2025;
//	cout << (unsigned int)&day << "\n";
//	cout << (unsigned int)&month << "\n";
//	cout << (unsigned int)&year << "\n";
//}

//-----------------------------------------------------------

//Структури вирішують проблему передачі множини різнотипних сутностей у функцію, а також їх повернення(можна й посиланнями / вказівниками, але це довго).

//-----------------------------------------------------------

//struct Date {
//	unsigned short day;
//	unsigned short month;
//	unsigned short year;
//} today, tomorrow, yesterday, new_year; // 4 глобальні змінні
//
//// Date today;
//// Date tomorrow;
//// Date yesterday;
//// Date new_year;
//
//int main() {
//
//	today.day = 13;
//	today.month = 5;
//	today.year = 2025;
//	cout << today.day << " " << today.month << " " << today.year << "\n";
//}

//-----------------------------------------------------------

//typedef struct Date {
//	unsigned short day;
//	unsigned short month;
//	unsigned short year;
//} Data, Period, Moment, Time, Termin, * PtrDate;
//
//int main() {
//	Date d;
//	Data x;
//
//	PtrDate p = new Date; // PtrDate == Date*
//
//	p->day = 10;
//}

//----------------------------------------------------------

//typedef unsigned int uint;
//typedef vector<vector<int>> matrix;
//
//int main() {
//	uint x = 10;
//	matrix m;
//}

//----------------------------------------------------------

//#define str string
//
//int main() {
//	basic_string<char, char_traits<char>, allocator<char>> name;
//	name = "Alex"; // string
//
//	str test = "P45";
//	cout << test << "\n";
//}

//----------------------------------------------------------

//#define str string
//#define якщо if
//#define крутись while
//#define покажи cout << 
//#define голова main
//#define рядок string
//#define тоді {
//
//int голова() {
//	рядок test = "P45";
//	покажи test << "\n";
//	якщо(test == "P45") тоді
//		покажи "OK!\n";
//}
//}

//----------------------------------------------------------

//struct Date {
//	int day;
//	int month;
//	int year;
//};
//
//int main() {
//	Date d; // 12 B
//	cout << sizeof(d) << "\n";
//	cout << sizeof(Date) << "\n";
//
//}

//----------------------------------------------------------

//struct Date {
//	char a; // 1
//	int day; // 4
//	int month; // 4
//	int year; // 4
//	char b; // 1
//}; // alignment - вирівнювання
//
//int main() {
//	cout << sizeof(char) << "\n"; // 1
//	cout << sizeof(Date) << "\n"; // 14 >>>> 20
//
//}

//----------------------------------------------------------

//struct Date {
//	int day; // 4
//	int month; // 4
//	int year; // 4
//	char a; // 1
//	char b; // 1
//}; // alignment - вирівнювання
//
//int main() {
//	cout << sizeof(char) << "\n"; // 1
//	cout << sizeof(Date) << "\n"; // 14 >>>> 16
//
//}

//----------------------------------------------------------

//struct Date {
//	int day;
//	int month;
//	int year;
//	int hours;
//	int minutes;
//	int seconds;
//	int milliseconds;
//};
//
//int main() {
//	cout << sizeof(Date) << "\n"; // 7 * 4 = 28
//
//}

//----------------------------------------------------------

//struct Date {
//	unsigned short day; // 1-31
//	unsigned short month; // 1-12
//	unsigned short year; // 1900-2125
//	unsigned short hours; // 0-23 
//	unsigned short minutes; // 0-59
//	unsigned short seconds; // 0-59
//	unsigned short milliseconds; // 0-999
//};
//
//int main() {
//	cout << sizeof(Date) << "\n"; // 7 * 4 = 28
//
//}

//----------------------------------------------------------

//1bit - 0....1
//2bit - 0 1 2 3
//3 - 0 1 2 3 4 5 6 7
//4 - 0...15
//5 - 0...31
//6 - 0...63

//----------------------------------------------------------

//// бітове поле
//struct Date {
//	unsigned short day : 5; // 1-31 (0...31)
//	unsigned short month : 4; // 1-12 (0...15)
//	unsigned short year : 12; // 1900-2125 (0...4095)
//	unsigned short hours : 5; // 0-23 (0...31)
//	unsigned short minutes : 6; // 0-59 (0...63)
//	unsigned short seconds : 6; // 0-59 (0...63)
//	unsigned short milliseconds : 10; // 0-999 (0...1023)
//};
//
//int main() {
//	cout << sizeof(Date) << "\n"; // 8
//
//}

//----------------------------------------------------------

// //бітове поле
//struct Date {
//	unsigned short year : 12; // 1900-2125 (0...4095)
//	unsigned short month : 4; // 1-12 (0...15)
//	unsigned short hours : 5; // 0-23 (0...31)
//	unsigned short minutes : 6; // 0-59 (0...63)
//	unsigned short day : 5; // 1-31 (0...31)
//	unsigned short seconds : 6; // 0-59 (0...63)
//	unsigned short milliseconds : 10; // 0-999 (0...1023)
//};
//
//int main() {
//	cout << sizeof(Date) << "\n"; // 8
//
//}

//----------------------------------------------------------

//Файл — кінцева іменована множина байтів, зазвичай розміщена на певному носії інформації(в тому числі й  в оперативній пам'яті).

//----------------------------------------------------------

//Методи роботи з бінарним та текстовим файлом різняться!Можна отримати довільний байт за індексом, але     
//не можна отримати довільний рядок — щоб отримати
//5 - й рядок, потрібно перебрати попередні 4.

//----------------------------------------------------------

//Бінарний файл — це звичайний файл, просто множина байтів.
//Умовно можна розглядати такий файл як масив.
//Текстовий файл — це файл, в якому при інтерпретації значень його байтів як кодів символів і представлення їх  
//на екрані у вигляді сукупності цих символів утворюється текст, що має сенс.

//----------------------------------------------------------

//----------------------------------------------------------

//----------------------------------------------------------

//----------------------------------------------------------

//----------------------------------------------------------