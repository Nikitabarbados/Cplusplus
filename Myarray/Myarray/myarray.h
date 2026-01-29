#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// функція виділення динамічної пам'яті під масив
int* createArray(int size) {
    return new int[size];
}

// функція ініціалізації динамічного масиву випадковими числами
void fillArray(int* arr, int size, int min = 0, int max = 100) {
    srand(time(0));
    for (int i = 0; i < size; i++) {
        arr[i] = min + rand() % (max - min + 1);
    }
}

// функція показу динамічного масиву на екран консолі
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//  функція очищення пам'яті від динамічного масиву
void deleteArray(int* arr) {
    delete[] arr;
    arr = nullptr;
}

//  функція додавання елемента на початок масиву
int* pushFront(int* arr, int& size, int value) {
    int* newArr = new int[size + 1];
    newArr[0] = value;
    for (int i = 0; i < size; i++) {
        newArr[i + 1] = arr[i];
    }
    delete[] arr;
    size++;
    return newArr;
}

//  функція додавання елемента в кінець масиву
int* pushBack(int* arr, int& size, int value) {
    int* newArr = new int[size + 1];
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }
    newArr[size] = value;
    delete[] arr;
    size++;
    return newArr;
}

//  функція вставки елемента за вказаним індексом
int* insertAt(int* arr, int& size, int index, int value) {
    if (index < 0) index = 0;
    if (index > size) index = size;

    int* newArr = new int[size + 1];
    for (int i = 0; i < index; i++) {
        newArr[i] = arr[i];
    }
    newArr[index] = value;
    for (int i = index; i < size; i++) {
        newArr[i + 1] = arr[i];
    }
    delete[] arr;
    size++;
    return newArr;
}

//  функція видалення елемента з початку масиву
int* popFront(int* arr, int& size) {
    if (size == 0) return arr;
    int* newArr = new int[size - 1];
    for (int i = 1; i < size; i++) {
        newArr[i - 1] = arr[i];
    }
    delete[] arr;
    size--;
    return newArr;
}

//  функція видалення елемента з кінця масиву
int* popBack(int* arr, int& size) {
    if (size == 0) return arr;
    int* newArr = new int[size - 1];
    for (int i = 0; i < size - 1; i++) {
        newArr[i] = arr[i];
    }
    delete[] arr;
    size--;
    return newArr;
}

//  функція видалення елемента за вказаним індексом
int* removeAt(int* arr, int& size, int index) {
    if (size == 0) return arr;
    if (index < 0) index = 0;
    if (index >= size) index = size - 1;

    int* newArr = new int[size - 1];
    for (int i = 0; i < index; i++) {
        newArr[i] = arr[i];
    }
    for (int i = index + 1; i < size; i++) {
        newArr[i - 1] = arr[i];
    }
    delete[] arr;
    size--;
    return newArr;
}
