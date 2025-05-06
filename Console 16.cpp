// 1 Завдання
// #include <iostream>
//using namespace std;
//void drawTriangle(int n) {
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n - i - 1; j++) {
//            cout << " ";
//        }
//        for (int j = 0; j < 2 * i + 1; j++) {
//            cout << "*";
//        }
//        cout << "\n";
//    }
//}
//
//int main() {
//    int n;
//    cout << "Enter the height of a triangle: ";
//    cin >> n;
//    drawTriangle(n);
//    return 0;
//}

// 2.1 Ромбик Завдання
//#include <iostream>
//using namespace std;
//
//void drawRhombus(int n) {
//    int mid = n / 2;
//    for (int i = 0; i <= mid; i++) {
//        for (int j = 0; j < n; j++) {
//            if (j >= mid - i && j <= mid + i) {
//                cout << "*";
//            }
//            else {
//                cout << " ";
//            }
//        }
//        cout << "\n";
//    }
//    for (int i = mid - 1; i >= 0; i--) {
//        for (int j = 0; j < n; j++) {
//            if (j >= mid - i && j <= mid + i) {
//                cout << "*";
//            }
//            else {
//                cout << " ";
//            }
//        }
//        cout << "\n";
//    }
//}
//
//int main() {
//    int n = 13; 
//    drawRhombus(n);
//    return 0;
//}

// 2.2 Стрелочка  Завдання
//#include <iostream>
//using namespace std;
//
//void drawArrow(int n) {
//    int mid = n / 2;
//    for (int i = 0; i <= mid; i++) {
//        for (int j = 0; j < n; j++) {
//            if (j < mid || (j >= mid && j <= mid + i)) {
//                cout << (j == mid + i ? "*" : " ");
//            }
//            else {
//                cout << "*";
//            }
//        }
//        cout << "\n";
//    }
//    for (int i = mid - 1; i >= 0; i--) {
//        for (int j = 0; j < n; j++) {
//            if (j < mid || (j >= mid && j <= mid + i)) {
//                cout << (j == mid + i ? "*" : " ");
//            }
//            else {
//                cout << "*";
//            }
//        }
//        cout << "\n";
//    }
//}
//
//int main() {
//    int n = 13;
//    drawArrow(n);
//    return 0;
//}

// 3 Паралелепіпед Завдання

//#include <iostream>
//using namespace std;
//
//void drawParallelepiped(int A, int B, int C) {
//    for (int i = 0; i < B; i++) {
//        for (int j = 0; j < i; j++) cout << " ";
//        cout << "/";
//        for (int j = 0; j < A; j++) cout << "*";
//        cout << "/";
//        cout << "\n";
//    }
//    for (int i = 0; i < C; i++) {
//        for (int j = 0; j < B; j++) cout << " ";
//        cout << "|";
//        for (int j = 0; j < A; j++) cout << (i == C - 1 ? "*" : " ");
//        cout << "|";
//        cout << "\n";
//    }
//    // Нижняя грань
//    for (int i = B - 1; i >= 0; i--) {
//        for (int j = 0; j < i; j++) cout << " ";
//        cout << "\\";
//        for (int j = 0; j < A; j++) cout << "*";
//        cout << "\\";
//        cout << "\n";
//    }
//}
//
//int main() {
//    int A, B, C;
//    cout << "Enter: A, B, C: ";
//    cin >> A;
//	cin >> B;
//	cin >> C;
//    drawParallelepiped(A, B, C);
//    return 0;
//}

// 5 Завдання

//#include <iostream>
//using namespace std;
//
//string getDayOfWeek(int day, int month, int year) {
//    if (month < 3) {
//        month += 12;
//        year--;
//    }
//    int k = day;
//    int m = month;
//    int C = year / 100;
//    int Y = year % 100;
//    int W = (k + ((13 * (m + 1)) / 5) + Y + (Y / 4) + (C / 4) - (2 * C)) % 7;
//    W = (W + 7) % 7;
//
//    string days[] = { "суббота", "воскресенье", "понедельник", "вторник", "среда", "четверг", "пятница" };
//    return days[W];
//}
//
//int main() {
//    int day, month, year;
//    cout << "Enter the day, month, year: ";
//    cin >> day >> month >> year;
//    cout << "Day of the week " << getDayOfWeek(day, month, year) << '\n';
//    return 0;
//}
