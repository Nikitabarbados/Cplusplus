#include <iostream>
#include <windows.h>
using namespace std;
//---------------------------------------------------------------------------------
// Завдання 1:
//using namespace std;
//
//void Line(int length, char symbol, int color, bool horizontal) {
//    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(hConsole, color);
//
//    for (int i = 0; i < length; ++i) {
//        cout << symbol;
//        if (!horizontal) cout << "\n";
//    }
//
//    if (horizontal) cout << "\n";
//
//    SetConsoleTextAttribute(hConsole, 7); 
//}
//
//int main() {
//    Line(20, '@', 12, true);
//    Line(10, '*', 10, false);
//}
//---------------------------------------------------------------------------------
// Завдання 2:




//---------------------------------------------------------------------------------
// Завдання 3:

//double Cube(double number) {
//    return number * number * number;
//}
//
//int main() {
//    double value = 5.0;
//    cout << "Куб числа " << value << " = " << Cube(value) << "\n";
//}

//---------------------------------------------------------------------------------
// Завдання 4:

bool IsPrime(int number) {
    if (number <= 1) return false;
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Введіть число: ";
    cin >> n;

    if (IsPrime(n))
        cout << n << " is a prime number." << "\n";
    else
        cout << n << " is not a prime number." << "\n";
}
//---------------------------------------------------------------------------------