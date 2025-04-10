// 1 exercise

//#include <iostream>
//using namespace std;
//
//int main() {
//    double uah;
//    const double usd = 41.47;
//    const double eur = 45.56;  
//    const double btc = 3385623.16;
//
//    cout << "Enter number hryvnias: ";
//    cin >> uah;
//
//    cout << "In dollars: " << uah / usd << "\n";
//    cout << "In euros: " << uah / eur << "\n";
//    cout << "In bitcoins: " << uah / btc << "\n";
//}

// 2 exercise

//#include <iostream>
//using namespace std;
//
//int main() {
//    double km;
//    cout << "Enter number kilometers: ";
//    cin >> km;
//
//    cout << "Land miles: " << km * 0.621371 << "\n";
//    cout << "Nautical miles: " << km * 0.539957 << "\n";
//}

// 3 exercise

//#include <iostream>
//using namespace std;
//
//int main() {
//    int a = 5, b = 10, temp;
//
//    temp = a;
//    a = b;
//    b = temp;
//
//    cout << "After replacement (with temp): a = " << a << ", b = " << b << "\n";
//
//    a = a + b;
//    b = a - b;
//    a = a - b;
//
//    cout << "After replacement (without temp): a = " << a << ", b = " << b << "\n";
//}

// 4 exercise

//#include <iostream>
//using namespace std;
//
//int main() {
//    int num1, num2;
//    cout << "Enter first three-digit number: ";
//    cin >> num1;
//    cout << "Enter second three-digit number: ";
//    cin >> num2;
//
//    int mid1 = (num1 / 10) % 10;
//    int mid2 = (num2 / 10) % 10;
//
//    cout << "Average first number: " << mid1 << "\n";
//    cout << "Average second number: " << mid2 << "\n";
//}

// 5 exercise

//#include <iostream>
//using namespace std;
//
//int main() {
//    int num;
//    cout << "Enter four-digit number: ";
//    cin >> num;
//
//    int d1 = num / 1000;
//    int d2 = (num / 100) % 10;
//    int d3 = (num / 10) % 10;
//    int d4 = num % 10;
//
//    cout << "The sum 1st and 3rd digits: " << d1 + d3 << "\n";
//    cout << "The difference 2nd and 4th: " << d2 - d4 << "\n";
//}

// 6 exercise

//#include <iostream>
//using namespace std;
//
//int main() {
//    int num;
//    cout << "Enter a three-digit number: ";
//    cin >> num;
//
//    int hundreds = num / 100;
//    int ones = num % 10;
//
//    int result = hundreds * 10 + ones;
//    cout << "Number without middle digit: " << result << "\n";
//}

// 7 exercise

//#include <iostream>
//using namespace std;
//
//int main() {
//    double deposit, percentage;
//    cout << "Enter deposit amount (UAH): ";
//    cin >> deposit;
//    cout << "Annual percentage (%): ";
//    cin >> percentage;
//
//    for (int month = 1; month <= 12; month++) {
//        double rate = deposit * (percentage / 100) / 12;
//        deposit += rate;
//        cout << "Month " << month << ": " << deposit << " UAH" << "\n";
//    }
//}

// 8 exercise

//#include <iostream>
//using namespace std;
//
//int main() {
//    double kg, pounds;
//    const double poundToGram = 405.9;
//
//    cout << "Enter mass in pounds: ";
//    cin >> pounds;
//    kg = (pounds * poundToGram) / 1000;
//    cout << "In kilograms: " << kg << " kg" << "\n";
//
//    cout << "Enter mass in kilograms: ";
//    cin >> kg;
//    pounds = (kg * 1000) / poundToGram;
//    cout << "In pounds: " << pounds << " pounds" << "\n";
//}

// 9 exercise

//#include <iostream>
//using namespace std;
//
//int main() {
//    int num;
//    cout << "Enter three-digit number: ";
//    cin >> num;
//
//    int hundreds = num / 100;
//    int tens = (num / 10) % 10;
//    int ones = num % 10;
//
//    int reversed = ones * 100 + tens * 10 + hundreds;
//    cout << "Inverted number: " << reversed << "\n";
//}

// 10 exercise

//#include <iostream>
//using namespace std;
//
//int main() {
//    const int N = 8;
//    double masses[N];
//    double total = 0;
//
//    cout << "Enter masses: " << N << " planets (in kg)" << "\n";
//    for (int i = 0; i < N; ++i) {
//        cout << "Planet: " << i + 1 << ": ";
//        cin >> masses[i];
//        total += masses[i];
//    }
//
//    double avg = total / N;
//    cout << "\nAverage weight: " << avg << " kg" << "\n";
//
//    double maxMass = masses[0];
//    int maxIndex = 0;
//
//    for (int i = 1; i < N; ++i) {
//        if (masses[i] > maxMass) {
//            maxMass = masses[i];
//            maxIndex = i;
//        }
//    }
//
//    cout << "Maximum weight: " << maxMass << " kg (planet " << maxIndex + 1 << ")" << "\n";
//    cout << "How many times is it bigger than the average: " << maxMass / avg << "\n";
//    cout << "Percentage total weight: " << (maxMass / total) * 100 << "%" << "\n";
//}

// 11 exercise

//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//int main() {
//	SetConsoleOutputCP(CP_UTF8);
//    double length, width, height, N, R;
//    cout << "Enter length of the room: ";
//    cin >> length;
//    cout << "Enter width of the room: ";
//    cin >> width;
//    cout << "Enter height of the room: ";
//    cin >> height;
//
//    cout << "How many liters paint are needed 1 m²: ";
//    cin >> N;
//
//    cout << "Price 1 liter of paint (UAH): ";
//    cin >> R;
//
//    double area = 2 * (length * height + width * height) + length * width;
//    double windowsDoors = area * 0.1;
//    double paintArea = area - windowsDoors;
//
//    double neededPaint = paintArea * N;
//    double totalCost = neededPaint * R;
//
//    cout << "Area for painting: " << paintArea << " m²" << "\n";
//    cout << "You need paint: " << neededPaint << " l" << "\n";
//    cout << "Total cost: " << totalCost << " UAH" << "\n";
//}
