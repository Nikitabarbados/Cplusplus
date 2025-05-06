#include <iostream>
using namespace std;

void removeLastElement(int*& ar, int& size) {
    if (size <= 0) return;

    int* newAr = new int[size - 1];
    for (int i = 0; i < size - 1; i++) {
        newAr[i] = ar[i];
    }
    delete[] ar;
    ar = newAr;
    size--;
}

void insertElement(int*& ar, int& size, int value, int position) {
    if (position < 0) position = 0;
    if (position > size) position = size;

    int* newAr = new int[size + 1];
    for (int i = 0; i < position; i++) {
        newAr[i] = ar[i];
    }
    newAr[position] = value;
    for (int i = position; i < size; i++) {
        newAr[i + 1] = ar[i];
    }

    delete[] ar;
    ar = newAr;
    size++;
}

int main() {
    int size = 5;
    int* ar = new int[size] {1, 2, 3, 4, 5};

    cout << "Initial array: ";
    for (int i = 0; i < size; i++) cout << ar[i] << " ";
    cout << "\n";

    removeLastElement(ar, size);
    cout << "After deleting the last item: ";
    for (int i = 0; i < size; i++) cout << ar[i] << " ";
    cout << "\n";

    insertElement(ar, size, 99, 0);
    cout << "After inserting 99 to the beginning: ";
    for (int i = 0; i < size; i++) cout << ar[i] << " ";
    cout << "\n";

    insertElement(ar, size, 77, size / 2);
    cout << "After inserting 77 in the middle: ";
    for (int i = 0; i < size; i++) cout << ar[i] << " ";
    cout << "\n";

    delete[] ar;
    return 0;
}
