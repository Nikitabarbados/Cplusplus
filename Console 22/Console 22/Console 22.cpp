#include <iostream>
#include <windows.h> // SetConsoleOutputCP(65001);
#include <string> // to_string
using namespace std;

// ------------------------------------------------------------------------

//int main()
//{
//	FILE* file;
//	int error_code = fopen_s(&file, "C:/Users/Alex/Desktop/1111.txt", "a+");
//	cout << error_code << "\n";
//	// work with file
//	fclose(file);
//}

// ------------------------------------------------------------------------

//int main()
//{
//	FILE* file;
//	int error_code = fopen_s(&file, "C:/Users/Alex/Desktop/test.txt", "w+");
//	if (error_code == 0 && file != nullptr) {
//		// work with file
//		string name = "Alex\n";
//		int number = 1234;
//		double pi = 3.1415926;
//		// file put string
//		fputs(name.c_str(), file); // c_str - перетворює стрінг на чар* const string (char*)
//		//fputs("\n", file);
//		fputs(name.c_str(), file);
//		//fputs("\n", file);
//		char* number_as_string = new char[500];
//		// itoa = int to ASCII-string
//		_itoa_s(number, number_as_string, 499, 10); // 1234 >>> "1234"
//		fputs(number_as_string, file);
//		fputs("\n", file);
//		delete[] number_as_string;
//		fclose(file);
//	}
//	else {
//		cout << "Error code: " << error_code << "\n";
//	}
//
//}

// ------------------------------------------------------------------------

//int main()
//{
//	FILE* file;
//	int error_code = fopen_s(&file, "C:/Users/Alex/Desktop/test.txt", "w+");
//	if (error_code == 0 && file != nullptr) {
//		// work with file
//		string name = "Alex\n";
//		int number = 1234;
//		double pi = 3.1415926;
//		fputs(name.c_str(), file); // c_str - перетворює стрінг на чар* const string (char*)
//		fputs(name.c_str(), file);
//		fputs(to_string(number).c_str(), file);
//		fputs("\n", file);
//		fputs(to_string(pi).c_str(), file);
//		fputs("\n", file);
//		fclose(file);
//	}
//	else {
//		cout << "Error code: " << error_code << "\n";
//	}
//
//}

// ------------------------------------------------------------------------

//int main()
//{
//	FILE* file;
//	int error_code = fopen_s(&file, "C:/Users/Alex/Desktop/test.txt", "r");
//	if (error_code == 0 && file != nullptr) {
//		// fgets == file get string
//		char* line = new char[200];
//		for (int l = 0; l < 4; l++) {
//			fgets(line, 199, file);
//			cout << line;
//		}
//		fclose(file);
//	}
//	else {
//		cout << "Error code: " << error_code << "\n";
//	}
//
//}

// ------------------------------------------------------------------------

//int main()
//{
//	SetConsoleCP(65001);
//	SetConsoleOutputCP(65001);
//	FILE* file;
//	int error_code = fopen_s(&file, "C:/Users/Admin/Desktop/Nikitos.txt", "r");
//	if (error_code == 0 && file != nullptr) {
//		// fgets == file get string
//		char* line = new char[200];
//		// feof == find end of file
//		while (true) { // я не знаю скільки буде рядків
//			fgets(line, 199, file); // спроба прочитати рядок
//			if (feof(file) == 0) { // якщо рядок вдало зчитався, і у файлі є щось іще (є іще рядок), то
//				cout << line; // показуємо поточний рядок
//			}
//			else break; // якщо фєоф повернув не 0, це означає що файл скінчився, і рядків більше нема
//		}
//		fclose(file);
//	}
//	else {
//		cout << "Error code: " << error_code << "\n";
//	}
//
//}

// ------------------------------------------------------------------------
// 
//int main() {
//	SetConsoleCP(65001);
//	SetConsoleOutputCP(65001);
//
//
//	FILE* file;
//	if (fopen_s(&file, "C:/Users/Admin/Desktop/Nikitos.txt", "r") == 0 && file != nullptr) {
//		char* lines[10];
//		for (int i = 0; i < 10; ++i)
//			lines[i] = new char[199];
//
//		int count = 0;
//		while (fgets(lines[count], 199, file) && count < 10) {
//			++count;
//		}
//		fclose(file);
//
//		if (count > 0) {
//			srand(time(0));
//			int index = rand() % count;
//			cout << "Random country: " << lines[index];
//		}
//		else {
//			cout << "File is empty!\n";
//		}
//
//		for (int i = 0; i < count; ++i)
//			delete[] lines[i];
//	}
//	else {
//		cout << "File could not be opened!\n";
//	}
//}

// ------------------------------------------------------------------------



// ------------------------------------------------------------------------



// ------------------------------------------------------------------------



// ------------------------------------------------------------------------



// ------------------------------------------------------------------------