// Завдання 1:
//#include <iostream>
//using namespace std;
//
//int main() {
//    int sum = 0;
//    for (int i = 1; i <= 10; i++) {
//        sum += i;
//    }
//    cout << "Sum of numbers 1 to 10: " << sum << "\n";
//}

// Завдання 2:

//#include <iostream>
//using namespace std;
//
//int main() {
//    int start, end;
//    cout << "Enter the start temperatures in Celsius: ";
//    cin >> start;
//    cout << "Enter the end temperatures in Celsius: ";
//    cin >> end;
//
//    cout << "Celsius\tFahrenheit\n";
//    for (int c = start; c <= end; c++) {
//        double f = c * 9.0 / 5.0 + 32;
//        cout << c << "\t" << f << "\n";
//    }
//    cout << "\n";
//}

// Завдання 4:

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    unsigned long long factorial = 1;
//    cout << "Enter a number: ";
//    cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        factorial *= i;
//    }
//
//    cout << n << "! = " << factorial << "\n";
//}

// Завдання 6:

//#include <iostream>
//using namespace std;
//
//int main() {
//    int number;
//    cout << "Enter a number: ";
//    cin >> number;
//
//    cout << "Numbers on which " << number << " divisible without remainder: ";
//    for (int i = 1; i <= number; i++) {
//        if (number % i == 0) {
//            cout << i << " ";
//        }
//    }
//    cout << "\n";
//}

// Завдання 7:

//#include <iostream>
//using namespace std;
//
//int main() {
//    int number;
//    cout << "Enter a number: ";
//    cin >> number;
//
//    bool isPrime = true;
//    if (number <= 1) isPrime = false;
//    for (int i = 2; i * i <= number; i++) {
//        if (number % i == 0) {
//            isPrime = false;
//            break;
//        }
//    }
//
//    if (isPrime)
//        cout << number << " - simple number." << "\n";
//    else
//        cout << number << " — not a prime number." << "\n";
//}

// Завдання 9:

//#include <iostream>
//using namespace std;
//
//int main() {
//    long long number;
//
//    cout << "Enter integer: ";
//    cin >> number;
//
//    if (number < 0) {
//        number = -number;
//    }
//
//    long long original = number;
//    long long reversed = 0;
//
//    while (number > 0) {
//        int digit = number % 10;
//        reversed = reversed * 10 + digit;
//        number /= 10;
//    }
//
//    if (original == reversed) {
//        cout << "Number " << original << " is a palindrome." << "\n";
//    }
//    else {
//        cout << "Number " << original << " is not a palindrome." << "\n";
//    }
//}