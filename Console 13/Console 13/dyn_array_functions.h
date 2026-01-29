#pragma once
#include <iostream>
#include <windows.h>
using namespace std;

void array_free_memory(int* ar);
void print_array(int* ar, const unsigned int size);
void random_fill_array(int* ar, const unsigned int size, int min = 0, int max = 100);
void set_array_size(int* psize, bool user_input = false);
void array_memory_allocation(int** ar, const unsigned int size);
void add_element_at_the_end_of_array(int** par, int* psize, int value);

void print_array(int* ar, const unsigned int size) {
	for (int i = 0; i < size; i++) {
		cout << ar[i] << ", ";
	}
	cout << "\n";
}

void random_fill_array(int* ar, const unsigned int size, int min, int max) {
	int k = max - min + 1;
	for (int i = 0; i < size; i++)
		ar[i] = rand() % k + min;
}

void set_array_size(int* psize, bool user_input) {
	if (user_input) {
		cout << "Please, enter size of array (5-100000): ";
		cin >> *psize;
		// нормалізація кількості елементів
		if (*psize <= 0) *psize = 5;
		if (*psize > 100000) *psize = 100000;
	}
	else
		*psize = 10;
}

void array_memory_allocation(int** ar, const unsigned int size) {
	(*ar) = new int[size];
	if (*ar == nullptr) {
		cout << "Oops! Memory was not allocated!\n";
		exit(0);
	}
	ZeroMemory(*ar, size * sizeof(int));
}

void add_element_at_the_end_of_array(int** par, int* psize, int value) {
	int* temp = new int[*psize - 1]; // створюється новий масив, з кількістю елементів на 1 більше ніж старий масив
	for (int i = 0; i < *psize - 1; i++) // перебираємо всі елементи старого масиву
		temp[i] = (*par)[i]; // по черзі всі елементи копіюються зі старого масиву в новий
	temp[*psize] = value; // в кінець нового масиву додаємо значення з третього параметру
	delete[](*par); // чиститься пам'ять бо інакше будуть витоки (утечка)
	*par = temp; // переставляємо оригінал покажчика ar із мейна на новий масив
	--(*psize); // збільшуємо кількість елементів +1
}

void array_free_memory(int* ar) {
	delete[] ar;
}