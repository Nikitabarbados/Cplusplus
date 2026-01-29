#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

// ------------------------------------------------------------------------

//int main() {
//	int width = 5;
//	int height = 4;
//
//	int* ar = new int[width] {};
//	int* br = new int[width] {};
//	int* cr = new int[width] {};
//	int* dr = new int[width] {};
//
//	for (int i = 0; i < width; i++) {
//		cout << ar[i] << " ";
//	}
//	cout << "\n";
//	for (int i = 0; i < width; i++) {
//		cout << br[i] << " ";
//	}
//	cout << "\n";
//	for (int i = 0; i < width; i++) {
//		cout << cr[i] << " ";
//	}
//	cout << "\n";
//	for (int i = 0; i < width; i++) {
//		cout << dr[i] << " ";
//	}
//	cout << "\n";
//
//}

// ------------------------------------------------------------------------

//int main() {
//	int width = 5;
//	int height = 4;
//
//	//int array[10];
//	//double array[10];
//	//string array[10];
//	//int* array[10]; // масив покажчиків
//
//	int* ptr_array[4];
//
//	ptr_array[0] = new int[width] {};
//	ptr_array[1] = new int[width] {};
//	ptr_array[2] = new int[width] {};
//	ptr_array[3] = new int[width] {};
//
//
//	for (int j = 0; j < height; j++)
//	{
//		for (int i = 0; i < width; i++) {
//			cout << ptr_array[j][i] << " ";
//		}
//		cout << "\n";
//	}
//}

// ------------------------------------------------------------------------

//int main() {
//	int width = 5;
//	int height = 4;
//
//	int* ptr_array[4];
//
//	for (int y = 0; y < height; y++) {
//		ptr_array[y] = new int[width] {};
//	}
//	// ptr_array[1] = new int[width] {};
//	// ptr_array[2] = new int[width] {};
//	// ptr_array[3] = new int[width] {};
//
//	for (int y = 0; y < height; y++) {
//		for (int x = 0; x < width; x++) {
//			cout << ptr_array[y][x] << " ";
//		}
//		cout << "\n";
//	}
//}

// ------------------------------------------------------------------------

//int main() {
//	int width = 5;
//	int height = 4;
//
//	int* ptr_array[4];
//
//	for (int y = 0; y < height; y++) {
//		ptr_array[y] = new int[width];
//		for (int x = 0; x < width; x++) {
//			ptr_array[y][x] = rand() % 4;
//			cout << ptr_array[y][x] << " ";
//		}
//		cout << "\n";
//	}
//}

// ------------------------------------------------------------------------

//int main() {
//	int width = 5;
//	int height = 4;
//
//	// new тип[кількість елементів];
//	// int* ptr = new int[5];
//	// double* ptr = new double[7];
//	// string* ptr = new string[width];
//	// int** ptr = new int*[width];
//
//	int** ptr_array = new int* [height];
//	// int* ptr_array[4];
//
//	for (int y = 0; y < height; y++) {
//		ptr_array[y] = new int[width];
//		for (int x = 0; x < width; x++) {
//			ptr_array[y][x] = rand() % 4;
//			cout << ptr_array[y][x] << " ";
//		}
//		cout << "\n";
//	}

// ------------------------------------------------------------------------

//int main() {
//	srand(time(0));
//	rand();
//	//cout << "Please, enter width: ";
//	//int width;
//	//cin >> width;
//	//cout << "Please, enter height: ";
//	//int height;
//	//cin >> height;
//	//int width = 15;
//	//int height = 10;
//	// 1) створити 2 змінні для ширини і висоти майбутнього 2-вимірного динамічного масиву
//	int width = rand() % 66 + 15; // 15-80
//	int height = rand() % 26 + 10; // 10-35
//	// 2) створити покажчик на покажчик
//	// 3) виділити пам'ять під "вертикальний" одновимірний масив покажчиків, кожен з яких буде тримати в собі базову адресу окремих одновимірних масивів
//	int** ptr_array = new int* [height]; // так як точна кількість рядків (висота 2д-масиву не відома зарання), її вводить користувач, статичний масив тут не підійде, тільки динамічний
//	// записати базову адресу, що поверне нью, в покажчик на покажчик
//	// 4) запустити цикл, який перебере рядки в майбутньому 2-вимірному динамічному масиві
//	for (int y = 0; y < height; y++) {
//		// 5) на кожній ітерації треба створити одновимірний масив даних
//		ptr_array[y] = new int[width];
//		// 6) перебрати елемент за елементом чергового рядка
//		for (int x = 0; x < width; x++) {
//			// 7) записати якесь корисне значення в поточний елемент того чи іншого рядка
//			ptr_array[y][x] = rand() % 4; // 0 1 2 3
//			cout << ptr_array[y][x] << "";
//		}
//		cout << "\n";
//	}
//}

// ------------------------------------------------------------------------

//int main() {
//    int rows = 5;       // кількість рядків
//    int cols = 10;      // кількість стовпців
//
//    // створення двовимірного масиву
//    int** array = new int* [rows];  // виділяємо пам'ять для масиву з рядків
//    for (int i = 0; i < rows; ++i) {
//        array[i] = new int[cols]; // виділяємо пам'ять для кожного рядка
//    }
//
//    // заповнення масиву значеннями
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            array[i][j] = rand() % 90 + 10;  // 10-99
//        }
//    }
//
//    // виведення масиву
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << array[i][j] << "\t";
//        }
//        cout << "\n";
//    }
//
//    // звільнення пам'яті
//    for (int i = 0; i < rows; ++i) {
//        delete[] array[i]; // видаляємо кожен рядок
//    }
//    delete[] array; // видаляємо масив з вказівниками
//}

// ------------------------------------------------------------------------

//void random_fill_2d_array(int** ar, int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            ar[i][j] = rand() % 90 + 10;
//        }
//    }
//}
//
//int main() {
//    int rows = 15;       // кількість рядків
//    int cols = 35;      // кількість стовпців
//
//    // створення двовимірного масиву
//    int** array = new int* [rows];  // виділяємо пам'ять для масиву з рядків
//    for (int i = 0; i < rows; ++i)
//        array[i] = new int[cols]; // виділяємо пам'ять для кожного рядка
//
//    // заповнення масиву значеннями
//    random_fill_2d_array(array, rows, cols);
//
//    // виведення масиву
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << array[i][j] << " ";
//        }
//        cout << "\n";
//    }
//
//    // звільнення пам'яті
//    for (int i = 0; i < rows; ++i) {
//        delete[] array[i]; // видаляємо кожен рядок
//    }
//    delete[] array; // видаляємо масив з вказівниками
//}

// ------------------------------------------------------------------------

//void random_fill_2d_array(int** ar, int rows, int cols) {
//    for (int i = 0; i < rows; ++i)
//        for (int j = 0; j < cols; ++j)
//            ar[i][j] = rand() % 90 + 10;
//}
//
//void show_2d_array(int** array, int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << array[i][j] << " ";
//        }
//        cout << "\n";
//    }
//}
//
//void free_memory_2d_array(int** array, int rows) {
//    for (int i = 0; i < rows; ++i)
//        delete[] array[i];
//    delete[] array;
//}
//
//int main() {
//    srand(time(0));
//
//    int rows = 15;
//    int cols = 35;
//
//    int** array = new int* [rows];
//    for (int i = 0; i < rows; ++i)
//        array[i] = new int[cols];
//
//    random_fill_2d_array(array, rows, cols); 
//    show_2d_array(array, rows, cols);         
//    free_memory_2d_array(array, rows);
//}

// ------------------------------------------------------------------------

//int main() {
//    SYSTEMTIME st;
//    GetSystemTime(&st);
//    cout << st.wYear << "\n"; // 2025
//    cout << st.wDay << "\n"; // 8
//    cout << st.wMonth << "\n"; // 5
//
//    string name = "Alex";
//    // name.
//
//    CONSOLE_CURSOR_INFO cursor;
//    // cursor.
//}

// ------------------------------------------------------------------------

//int main() {
//    // сутності комплексних типів можна спробувати описати рядком тексту (створити змінну типу стрінг)
//    // проблема стрінга: рядок не перевіряє ніяк свою внутрішню структуру (яка частина корисних даних після якої йде)
//    // протокол запису даних в рядок можна сформулювати, але все одно нема гарантії, що цей протокол буде кимось притримуватися 
//    // приклад протоколу: спочатку назва, потім оригінальна назва, потім рік, опис, і тд
//    string movie = "Побег из Шоушенка, Original title: The Shawshank Redemption, 1994, 2h 22m,
//	  A banker convicted of uxoricide forms a friendship over a quarter century with a hardened convict,
//    while maintaining his innocence and trying to remain hopeful through simple compassion.";
//    // проблема стрінга2: дуже важко буде парсити (визначати що де знаходиться) цей рядок, особливо якщо структура порушена і протокол не дотримано
//
//}

// ------------------------------------------------------------------------

//int main() {
//    string name = "Побег из Шоушенка";
//    string original_title = "The Shawshank Redemption";
//    double imdb_rating = 9.3;
//    int year = 1994;
//    int age_restriction = 16;
//    string poster = "https://m.media-amazon.com/images/M/MV5BMDAyY2FhYjctNDc5OS00MDNlLThiMGUtY2UxYWVkNGY2ZjljXkEyXkFqcGc@._V1_FMjpg_UX1000_.jpg";
//    string trailer = "";
//    string additional_video_URLs[6];
//    string additional_photo_URLS[99];
//    string genres[2] = { "Epic", "Drama" };
//    string description = "A banker convicted of uxoricide forms a friendship over a quarter century with a hardened convict,
// while maintaining his innocence and trying to remain hopeful through simple compassion.";
//}

// ------------------------------------------------------------------------

//Структура — це користувацький складений тип даних.Технічно це множина, що складається   
//з одного або більше елементів, які можуть мати різні типи, об'єднані під одним ім’ям.

// ------------------------------------------------------------------------

//// Movie - це назва нового складеного користувацького типу даних
//struct Movie {
//    string name;
//    string original_title;
//    double imdb_rating;
//    int year;
//    int age_restriction;
//    string poster;
//    string trailer;
//    string* additional_video_URLs; // динамічний масив
//    string* additional_photo_URLS;
//    string* genres;
//    string description;
//    bool bachyv_abo_ni;
//};
//
//int main() {
//    int x; // приклад створення змінної примітивного типу
//    Movie film; // а це змінна уже буде комплексного типу (структурного)
//    film.name = "Побег из Шоушенка";
//    film.original_title = "The Shawshank Redemption";
//    film.imdb_rating = 9.3;
//    film.year = 1994;
//    film.age_restriction = 16;
//    film.poster = "https://m.media-amazon.com/images/M/MV5BMDAyY2FhYjctNDc5OS00MDNlLThiMGUtY2UxYWVkNGY2ZjljXkEyXkFqcGc@._V1_FMjpg_UX1000_.jpg";
//    film.genres = new string[2]{ "Epic", "Drama" };
//    film.description = "A banker convicted of uxoricide forms a friendship over a quarter century with a hardened convict, while maintaining his innocence and trying to remain hopeful through simple compassion.";
//
//}

// ------------------------------------------------------------------------

//// Movie - це назва нового складеного користувацького типу даних
//struct Movie {
//    string name; // ПОЛЕ (field) СТРУКТУРИ
//    string original_title;
//    double imdb_rating;
//    int year;
//    int age_restriction;
//    string poster;
//    string trailer;
//    string* additional_video_URLs; // динамічний масив
//    string* additional_photo_URLS;
//    string* genres;
//    int genres_count;
//    string description;
//    bool bachyv_abo_ni;
//};
//
//int main() {
//    Movie films[5];
//    const Movie konst;
//    Movie film; // а це змінна уже буде комплексного типу (структурного)
//    film.name = "Побег из Шоушенка";
//    film.original_title = "The Shawshank Redemption";
//    film.imdb_rating = 9.3;
//    film.year = 1994;
//    film.age_restriction = 16;
//    film.poster = "https://m.media-amazon.com/images/M/MV5BMDAyY2FhYjctNDc5OS00MDNlLThiMGUtY2UxYWVkNGY2ZjljXkEyXkFqcGc@._V1_FMjpg_UX1000_.jpg";
//    film.genres_count = 2;
//    film.genres = new string[film.genres_count]{ "Epic", "Drama" };
//    film.description = "A banker convicted of uxoricide forms a friendship over a quarter century with a hardened convict, while maintaining his innocence and trying to remain hopeful through simple compassion.";
//
//    cout << film.original_title << "\nIMDB Rating: ";
//    cout << film.imdb_rating << "\nYear: ";
//    cout << film.year << "\nAge: ";
//    cout << film.age_restriction << "+\n Description: ";
//    cout << film.description << "\nGenres: ";
//    for (int i = 0; i < film.genres_count; i++) {
//        cout << film.genres[i] << ", ";
//    }
//    string command = "start " + film.poster;
//    system(command.c_str());
//}

// ------------------------------------------------------------------------

//struct Date {
//	int day; // день 	int month; // місяць 	int year; // рік }; struct Employee { 	char name[100]; // ПІБ 	char address[100]; // домашня адреса 	double salary; // зарплатня 	Date birthdate; // дата народження 	Date hiredate; // з якої дати працює };

// ------------------------------------------------------------------------

//struct mynotebook {
//    string brand;
//    string model;
//    int ram_gb;
//    double screen_size_inches;
//    bool has_dedicated_gpu;
//};
//
//int main() {
//    mynotebook myLaptop;
//
//    myLaptop.brand = "ASUS";
//    myLaptop.model = "TUF Gaming F15";
//    myLaptop.ram_gb = 32;
//    myLaptop.screen_size_inches = 15.6;
//    myLaptop.has_dedicated_gpu = true;
//
//    cout << "Brand: " << myLaptop.brand << "\n";
//    cout << "Model: " << myLaptop.model << "\n";
//    cout << "RAM: " << myLaptop.ram_gb << " GB" << "\n";
//    cout << "Screen Size: " << myLaptop.screen_size_inches << " inches" << "\n";
//    cout << "Dedicated GPU: " << (myLaptop.has_dedicated_gpu ? "Yes" : "No") << "\n";
//}


// ------------------------------------------------------------------------

//struct Flower {
//    string name;
//    string color;
//    double height_cm;
//    bool aromat;
//    int lepestki_count;
//};
//
//int main() {
//    Flower rose;
//
//    rose.name = "Rose";
//    rose.color = "Red";
//    rose.height_cm = 60.5;
//    rose.aromat = true;
//    rose.lepestki_count = 32;
//
//    cout << "Name flower: " << rose.name << "\n";
//    cout << "Color: " << rose.color << "\n";
//    cout << "Height: " << rose.height_cm << " sm" << "\n";
//    cout << "Aromatic: " << (rose.aromat ? "Sure" : "Nah") << "\n";
//    cout << "Number of lepestki: " << rose.lepestki_count << "\n";
//}

// ------------------------------------------------------------------------

//int main() {
//    Movie film; // а це змінна уже буде комплексного типу (структурного)
//
//    cout << "Please, enter name of the movie: ";
//    cin >> film.name;
//
//    cout << "Please, enter rating of the movie: ";
//    cin >> film.imdb_rating;
//
//    cout << "Please, enter year of the movie: ";
//    cin >> film.year;

// ------------------------------------------------------------------------

//// Movie - це назва нового складеного користувацького типу даних
//struct Movie {
//    string name; // ПОЛЕ (field) СТРУКТУРИ
//    string original_title;
//    double imdb_rating;
//    int year;
//    int age_restriction;
//    string poster;
//    string trailer;
//    string* additional_video_URLs; // динамічний масив
//    string* additional_photo_URLS;
//    string* genres;
//    int genres_count;
//    string description;
//    bool bachyv_abo_ni;
//};
//
//void InputMovie(Movie& movie) {
//    cout << "Please, enter name of the movie: ";
//    cin >> movie.name;
//
//    cout << "Please, enter rating of the movie: ";
//    cin >> movie.imdb_rating;
//
//    cout << "Please, enter year of the movie: ";
//    cin >> movie.year;
//
//    cout << "Please, enter description of the movie: ";
//    cin >> movie.description;
//
//    // ....
//}
//
//void PrintMovie(const Movie& movie) {
//    // movie.name = "TEST"; // const гарантує, що об'єкт структури не буде змінено всередині функції
//    // & - передача за посиланням, і не буде витрачатися час на КОПІЮВАННЯ великого об'єкта структури
//
//    //cout << movie.original_title << "\nIMDB Rating: ";
//    cout << movie.imdb_rating << "\nYear: ";
//    cout << movie.year << "\nAge: ";
//    //cout << movie.age_restriction << "+\n Description: ";
//    cout << movie.description << "\nGenres: ";
//    //for (int i = 0; i < movie.genres_count; i++) {
//    //    cout << movie.genres[i] << ", ";
//    //}
//    //string command = "start " + movie.poster;
//    //system(command.c_str());
//}
//
//int main() {
//
//    Movie film;
//    InputMovie(film);
//    PrintMovie(film);
//    // cout << sizeof(Movie) << "\n"; // 256
//
//    Movie x;
//
//}

// ------------------------------------------------------------------------

//НАВІЩО структури
//
//Ідеологічна причина — моделювання складних сутностей.Об'єктів (екземплярів) структурного типу буде багато. Технічна причина — передача     
//у функцію множини різнотипних змінних/констант, а також їх повернення з функції.

// ------------------------------------------------------------------------
