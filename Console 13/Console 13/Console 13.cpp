// -----------------------------------------------------------------------------------------------------
//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//// функція для заповнення масиву користувачем
//void user_fill_array(int* ar, const unsigned int size) {
//	for (int i = 0; i < size; i++) {
//		cout << "Enter element [" << i << "]: ";
//		cin >> ar[i];
//	}
//	cout << "\n";
//}
//
//// функція по роздруківці масиву
//void print_array(int* ar, const unsigned int size) {
//	for (int i = 0; i < size; i++) {
//		cout << ar[i] << ", ";
//	}
//	cout << "\n";
//}
//
////void random_fill_array(int* ar, const unsigned int size, int min = 0, int max = 100) {
////	int k = max - min + 1;
////	for (int i = 0; i < size; i++)
////		ar[i] = rand() % k + min;
////}
//
//int main() {
//	srand(time(0));
//
//	int size;
//	cout << "Please, enter size of array (5-100000): ";
//	cin >> size;
//	// нормалізація кількості елементів
//	if (size <= 0) size = 5;
//	if (size > 100000) size = 100000;
//	int* ar = new int[size]; // приклад динамічного масиву, в результаті роботи оператора нью повернеться БАЗОВА АДРЕСА МАСИВУ
//
//	user_fill_array(ar, size);
//	print_array(ar, size);
//
//	// ==============================================
//	int value;
//	cout << "Please, input number to add into array: ";
//	cin >> value;
//
//	int* temp = new int[size + 1];
//	// 3) запустити цикл, який перенесе всі елементи зі старого масиву в новий (скопіює значення по індексах 0-0 1-1 2-2 3-3 4-4
//	for (int i = 0; i < size; i++) {
//		temp[i] = ar[i];
//	}
//	// 4) в кінець нового масиву треба додати потрібне значення
//	temp[size] = value;
//	// 5) почистити пам'ять від старого масиву (делітом)
//	delete[] ar;
//	// 6) переставити покажчик на новий масив
//	ar = temp;
//	// 7) збільшити кількість елементів на 1 у змінній сайз
//	size++;
//
//	print_array(ar, size);
//
//	cout << "Please, input number to add into array: ";
//	cin >> value;
//
//	temp = new int[size + 1];
//	// 3) запустити цикл, який перенесе всі елементи зі старого масиву в новий (скопіює значення по індексах 0-0 1-1 2-2 3-3 4-4
//	for (int i = 0; i < size; i++) {
//		temp[i] = ar[i];
//	}
//	// 4) в кінець нового масиву треба додати потрібне значення
//	temp[size] = value;
//	// 5) почистити пам'ять від старого масиву (делітом)
//	delete[] ar;
//	// 6) переставити покажчик на новий масив
//	ar = temp;
//	// 7) збільшити кількість елементів на 1 у змінній сайз
//	size++;
//
//	print_array(ar, size);
//
//	delete[] ar;
//
//}
// 
// -----------------------------------------------------------------------------------------------------
// 
//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//// функція по роздруківці масиву
//void print_array(int* ar, const unsigned int size) {
//	for (int i = 0; i < size; i++) {
//		cout << ar[i] << ", ";
//	}
//	cout << "\n";
//}
//
//void random_fill_array(int* ar, const unsigned int size, int min = 0, int max = 100) {
//	int k = max - min + 1;
//	for (int i = 0; i < size; i++)
//		ar[i] = rand() % k + min;
//}
//
//void set_array_size(int* psize, bool user_input = false) {
//	if (user_input) {
//		cout << "Please, enter size of array (5-100000): ";
//		cin >> *psize;
//		// нормалізація кількості елементів
//		if (*psize <= 0) *psize = 5;
//		if (*psize > 100000) *psize = 100000;
//	}
//	else
//		*psize = 10;
//}
//
//int main() {
//	srand(time(0));
//
//	int size;
//	set_array_size(&size, true);
//
//	int* ar = new int[size]; // приклад динамічного масиву, в результаті роботи оператора нью повернеться БАЗОВА АДРЕСА МАСИВУ
//
//	random_fill_array(ar, size, -30, +50);
//	print_array(ar, size);
//
//	// ==============================================
//	int value;
//	cout << "Please, input number to add into array: ";
//	cin >> value;
//
//	int* temp = new int[size + 1];
//	// 3) запустити цикл, який перенесе всі елементи зі старого масиву в новий (скопіює значення по індексах 0-0 1-1 2-2 3-3 4-4
//	for (int i = 0; i < size; i++) {
//		temp[i] = ar[i];
//	}
//	// 4) в кінець нового масиву треба додати потрібне значення
//	temp[size] = value;
//	// 5) почистити пам'ять від старого масиву (делітом)
//	delete[] ar;
//	// 6) переставити покажчик на новий масив
//	ar = temp;
//	// 7) збільшити кількість елементів на 1 у змінній сайз
//	size++;
//
//	print_array(ar, size);
//
//	cout << "Please, input number to add into array: ";
//	cin >> value;
//
//	temp = new int[size + 1];
//	// 3) запустити цикл, який перенесе всі елементи зі старого масиву в новий (скопіює значення по індексах 0-0 1-1 2-2 3-3 4-4
//	for (int i = 0; i < size; i++) {
//		temp[i] = ar[i];
//	}
//	// 4) в кінець нового масиву треба додати потрібне значення
//	temp[size] = value;
//	// 5) почистити пам'ять від старого масиву (делітом)
//	delete[] ar;
//	// 6) переставити покажчик на новий масив
//	ar = temp;
//	// 7) збільшити кількість елементів на 1 у змінній сайз
//	size++;
//
//	print_array(ar, size);
//
//	delete[] ar;
//
//}

// -----------------------------------------------------------------------------------------------------

//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//// функція по роздруківці масиву
//void print_array(int* ar, const unsigned int size) {
//	for (int i = 0; i < size; i++) {
//		cout << ar[i] << ", ";
//	}
//	cout << "\n";
//}
//
//void random_fill_array(int* ar, const unsigned int size, int min = 0, int max = 100) {
//	int k = max - min + 1;
//	for (int i = 0; i < size; i++)
//		ar[i] = rand() % k + min;
//}
//
//void set_array_size(int* psize, bool user_input = false) {
//	if (user_input) {
//		cout << "Please, enter size of array (5-100000): ";
//		cin >> *psize;
//		// нормалізація кількості елементів
//		if (*psize <= 0) *psize = 5;
//		if (*psize > 100000) *psize = 100000;
//	}
//	else
//		*psize = 10;
//}
//
//void array_memory_allocation(int** ar, const unsigned int size) {
//	(*ar) = new int[size];
//	if (*ar == nullptr) {
//		cout << "Oops! Memory was not allocated!\n";
//		exit(0);
//	}
//	ZeroMemory(*ar, size * sizeof(int));
//}
//
//int main() {
//	srand(time(0));
//
//	int size;
//	set_array_size(&size, true);
//
//	int* ar; // оригінал покажчика в мейні
//	array_memory_allocation(&ar, size);
//
//	// int* ar = new int[size]; // приклад динамічного масиву, в результаті роботи оператора нью повернеться БАЗОВА АДРЕСА МАСИВУ
//
//	random_fill_array(ar, size, -30, +50);
//	print_array(ar, size);
//
//	// ==============================================
//	int value;
//	cout << "Please, input number to add into array: ";
//	cin >> value;
//
//	int* temp = new int[size + 1];
//	// 3) запустити цикл, який перенесе всі елементи зі старого масиву в новий (скопіює значення по індексах 0-0 1-1 2-2 3-3 4-4
//	for (int i = 0; i < size; i++) {
//		temp[i] = ar[i];
//	}
//	// 4) в кінець нового масиву треба додати потрібне значення
//	temp[size] = value;
//	// 5) почистити пам'ять від старого масиву (делітом)
//	delete[] ar;
//	// 6) переставити покажчик на новий масив
//	ar = temp;
//	// 7) збільшити кількість елементів на 1 у змінній сайз
//	size++;
//
//	print_array(ar, size);
//
//	cout << "Please, input number to add into array: ";
//	cin >> value;
//
//	temp = new int[size + 1];
//	// 3) запустити цикл, який перенесе всі елементи зі старого масиву в новий (скопіює значення по індексах 0-0 1-1 2-2 3-3 4-4
//	for (int i = 0; i < size; i++) {
//		temp[i] = ar[i];
//	}
//	// 4) в кінець нового масиву треба додати потрібне значення
//	temp[size] = value;
//	// 5) почистити пам'ять від старого масиву (делітом)
//	delete[] ar;
//	// 6) переставити покажчик на новий масив
//	ar = temp;
//	// 7) збільшити кількість елементів на 1 у змінній сайз
//	size++;
//
//	print_array(ar, size);
//
//	delete[] ar;
//
//}

// -----------------------------------------------------------------------------------------------------

//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//void print_array(int* ar, const unsigned int size) {
//	for (int i = 0; i < size; i++) {
//		cout << ar[i] << ", ";
//	}
//	cout << "\n";
//}
//
//void random_fill_array(int* ar, const unsigned int size, int min = 0, int max = 100) {
//	int k = max - min + 1;
//	for (int i = 0; i < size; i++)
//		ar[i] = rand() % k + min;
//}
//
//void set_array_size(int* psize, bool user_input = false) {
//	if (user_input) {
//		cout << "Please, enter size of array (5-100000): ";
//		cin >> *psize;
//		// нормалізація кількості елементів
//		if (*psize <= 0) *psize = 5;
//		if (*psize > 100000) *psize = 100000;
//	}
//	else
//		*psize = 10;
//}
//
//void array_memory_allocation(int** ar, const unsigned int size) {
//	(*ar) = new int[size];
//	if (*ar == nullptr) {
//		cout << "Oops! Memory was not allocated!\n";
//		exit(0);
//	}
//	ZeroMemory(*ar, size * sizeof(int));
//}
//
//void add_element_at_the_end_of_array(int** par, int* psize, int value) {
//	int* temp = new int[*psize + 1];
//	for (int i = 0; i < *psize; i++) // *psize == size (main)
//		temp[i] = (*par)[i]; // *par == ar (main)
//	temp[*psize] = value;
//	delete[] * par;
//	*par = temp;
//	++(*psize);
//}
//
//int main() {
//	srand(time(0));
//	int size; // оригінал звичайної змінної в мейні
//	set_array_size(&size, true);
//	int* ar; // оригінал покажчика в мейні
//	array_memory_allocation(&ar, size);
//	random_fill_array(ar, size);
//	print_array(ar, size);
//	// оригінали покажчика + змінної створені в одній функції, але змінюватися вони мають в іншій функції
//	add_element_at_the_end_of_array(&ar, &size, 100); // якщо передати адреси оригіналів, то інша функція зможе працювати саме з оригіналами, а не з копіями їх значень
//	print_array(ar, size);
//	delete[] ar;
//}

// -----------------------------------------------------------------------------------------------------

#include "dyn_array_functions.h"

int main() {
	srand(time(0));
	int size;
	set_array_size(&size, true);
	int* ar;
	array_memory_allocation(&ar, size);
	random_fill_array(ar, size);
	print_array(ar, size);

	for (int i = 0; true; i++)
	{
		add_element_at_the_end_of_array(&ar, &size, rand() % 1000 + 1000);
		print_array(ar, size);
	}

	array_free_memory(ar);
}
