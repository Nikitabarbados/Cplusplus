// 1 Exercise

//#include <iostream>
//using namespace std;	
//
//int main() {
//    int x1, y1, x2, y2, x, y;
//
//    cout << "Enter coordinates the upper left corner(x1): ";
//    cin >> x1;
//    cout << "Enter coordinates the upper left corner(y1): ";
//    cin >> y1;
//
//    cout << "Enter coordinates the lower right corner (x2): ";
//    cin >> x2;
//    cout << "Enter coordinates the lower right corner (y2): ";
//    cin >> y2;
//
//    cout << "Enter coordinate point (x): ";
//    cin >> x;
//    cout << "Enter coordinate point (y): ";
//    cin >> y;
//
//    if (x >= x1 && x <= x2 && y >= y1 && y <= y2)
//        cout << "Point belongs rectangle.\n";
//    else
//        cout << "Point does not belong rectangle.\n";
//}

// 2 Exercise

//#include <iostream>
//using namespace std;
//
//int main() {
//    int ticketNumber;
//
//    cout << "Enter six-digit ticket number (from 100000 to 999999): ";
//    cin >> ticketNumber;
//
//    if (ticketNumber < 100000 || ticketNumber > 999999) {
//        cout << "Error: Ticket number must be a six-digit number!" << "\n";
//        return 1;
//    }
//
//    int digit1 = ticketNumber / 100000;      
//    int digit2 = (ticketNumber / 10000) % 10;
//    int digit3 = (ticketNumber / 1000) % 10; 
//    int digit4 = (ticketNumber / 100) % 10;  
//    int digit5 = (ticketNumber / 10) % 10;   
//    int digit6 = ticketNumber % 10;          
//
//    int sumFirstThree = digit1 + digit2 + digit3;
//    int sumLastThree = digit4 + digit5 + digit6;
//
//    cout << "The first three digits: " << digit1 << ", " << digit2 << ", " << digit3 << "\n";
//    cout << "The sum first three digits: " << sumFirstThree << "\n";
//    cout << "Last three digits: " << digit4 << ", " << digit5 << ", " << digit6 << "\n";
//    cout << "The sum last three digits: " << sumLastThree << "\n";
//
//    if (sumFirstThree == sumLastThree) {
//        cout << "Ticket with a number " << ticketNumber << " is happy!" << "\n";
//    }
//    else {
//        cout << "Ticket with a number " << ticketNumber << " is not happy." << "\n";
//    }
//}

// 3 Exercise

//#include <iostream>
//using namespace std;
//
//int main() {
//    double a, b;
//    char op;
//
//    cout << "Enter first real numbers: ";
//    cin >> a;
//    cout << "Enter second real numbers: ";
//    cin >> b;
//
//    cout << "\nChoose operation:\n";
//    cout << "+ : addition\n- : subtraction\n* : multiplication\n/ : division\n% : remainder from division\n";
//    cin >> op;
//
//    switch (op) {
//    case '+':
//        cout << "Result: " << a + b << "\n";
//        break;
//    case '-':
//        cout << "Result: " << a - b << "\n";
//        break;
//    case '*':
//        cout << "Result: " << a * b << "\n";
//        break;
//    case '/':
//        if (b != 0)
//            cout << "Result: " << a / b << "\n";
//        else
//            cout << "Error: division by 0!" << "\n";
//        break;
//    case '%':
//        if ((int)b != 0)
//            cout << "Result: " << (int)a % (int)b << "\n";
//        else
//            cout << "Error: division by 0!" << "\n";
//        break;
//    }
//}

// 4 Exercise

//#include <iostream>
//using namespace std;
//
//int main() {
//    int num;
//    cout << "Enter number: ";
//    cin >> num;
//
//    string result = (num >= 0 && num <= 100) ? "Number in a range [0;100]" : "Number out range";
//    cout << result << "\n";
//}

// 5 Exercise

//#include <iostream>
//using namespace std;
//
//int main() {
//    double num;
//    cout << "Enter number: ";
//    cin >> num;
//
//    string result = (num == (int)num) ? "An integer" : "It has fractional part";
//    cout << result << "\n";
//}

// 6 Exercise	

//#include <iostream>
//using namespace std;
//
//int main() {
//    srand(time(0)); 
//    string predictions[] = {
//        "Good luck awaits you!",
//        "Be careful with your choice.",
//        "Today is a good day for new business.",
//        "Do not rush with decisions.",
//        "Fate is preparing an unpleasant surprise!",
//        "It's time to act - don't delay!"
//    };
//
//    int randomIndex = rand() % 6;
//    cout << "Molfar-3000 says: " << predictions[randomIndex] << "\n";
//}
