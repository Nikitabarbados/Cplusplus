#include <iostream>
using namespace std;

// -----------------------------------------------------------------
// Завдання 1

//int main() {
//    const int size = 10;
//    int ar[size];
//
//    srand(time(0));
//
//    cout << "Massive: ";
//    for (int i = 0; i < size; i++) {
//        ar[i] = (rand() % 41) - 20;
//        cout << ar[i] << " ";
//    }
//    cout << "\n";
//
//    int sum = 0;
//    for (int i = 0; i < size; i++) {
//        sum += ar[i];
//    }
//
//    double sumDouble = 0;
//    for (int i = 0; i < size; i++) {
//        sumDouble += ar[i];
//    }
//    double average = sumDouble / size;
//
//    cout << "Sum of elements: " << sum << "\n";
//    cout << "Arithmetic mean: " << average << "\n";
//}

// -----------------------------------------------------------------
// Завдання 2

//int main() {
//    const int SIZE = 100;
//    int ar[SIZE];
//    int target, count = 0;
//
//    srand(time(0));
//    for (int i = 0; i < SIZE; i++) {
//        ar[i] = rand() % 100;
//    }
//
//    cout << "Enter a number to search for: ";
//    cin >> target;
//
//    for (int i = 0; i < SIZE; i++) {
//        if (ar[i] == target) count++;
//    }
//
//    cout << "Number " << target << " meets " << count << " time(s)." << "\n";
//}

// -----------------------------------------------------------------
// Завдання 3
// 
//int main() {
//    const int SIZE = 20;
//    int ar[SIZE], minVal, maxVal, minIdx = 0, maxIdx = 0;
//
//    srand(time(0));
//    for (int i = 0; i < SIZE; i++) {
//        ar[i] = rand() % 100; 
//        cout << ar[i] << " ";
//    }
//    cout << "\n";
//
//    minVal = maxVal = ar[0];
//
//    for (int i = 1; i < SIZE; i++) {
//        if (ar[i] < minVal) {
//            minVal = ar[i];
//            minIdx = i;
//        }
//        if (ar[i] > maxVal) {
//            maxVal = ar[i];
//            maxIdx = i;
//        }
//    }
//
//    cout << "Minimum: " << minVal << " (index " << minIdx << ")" << "\n";
//    cout << "Maximum: " << maxVal << " (index " << maxIdx << ")" << "\n";
//}

// -----------------------------------------------------------------
// Завдання 4

//int main() {
//    const int SIZE = 200;
//    int ar[SIZE];
//    int oneDigit = 0, twoDigit = 0, threeDigit = 0;
//
//    srand(time(0));
//    for (int i = 0; i < SIZE; i++) {
//        ar[i] = rand() % 201;
//        if (ar[i] >= 1 && ar[i] <= 9) oneDigit++;
//        else if (ar[i] >= 10 && ar[i] <= 99) twoDigit++;
//        else if (ar[i] >= 100 && ar[i] <= 200) threeDigit++;
//    }
//
//    cout << "Однорозрядні: " << (oneDigit * 100.0 / SIZE) << "%" << "\n";
//    cout << "Двозначні: " << (twoDigit * 100.0 / SIZE) << "%" << "\n";
//    cout << "Тризначні: " << (threeDigit * 100.0 / SIZE) << "%" << "\n";
//}

// -----------------------------------------------------------------
// Завдання 5

//#include <iostream>
//using namespace std;
//
//int main() {
//    const int M = 10;
//    const int N = 8;
//    int A[M] = { 3, 7, 5, 10, 2, 7, 8, 9, 0, 4 };
//    int B[N] = { 1, 5, 2, 3, 6, 4, 4, 9 };
//    int C[10];
//    int cSize = 0;
//
//    for (int i = 0; i < M; i++) {
//        for (int j = 0; j < N; j++) {
//            if (A[i] == B[j]) {
//                bool alreadyExists = false;
//                for (int k = 0; k < cSize; k++) {
//                    if (C[k] == A[i]) {
//                        alreadyExists = true;
//                        break;
//                    }
//                }
//
//                if (!alreadyExists) {
//                    C[cSize] = A[i];
//                    cSize++;
//                }
//                break;
//            }
//        }
//    }
//
//    cout << "Common elements without repetitions: ";
//    for (int i = 0; i < cSize; i++) {
//        cout << C[i] << " ";
//    }
//    cout << "\n";
//}