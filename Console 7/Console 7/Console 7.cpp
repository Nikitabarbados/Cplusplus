#include <iostream>
#include <windows.h>
using namespace std;

// функція з двома параметрами за замовчуванням (необов'язковими параметрами)
// якщо передати значення - буде наше значення
// якщо не передати значення - то буде використано те що вказано після =
//void write(string text, int color, short x = 0, short y = 0) 
//{
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleTextAttribute(h, color);
//	SetConsoleCursorPosition(h, { x, y });
//	cout << text << "\n";
//}
//
//int main()
//{
//	write("AAAAAA", 12, 3, 3);
//	write("BBBBBB", 10, 5, 5);
//	write("CCCCCC", 14, 7, 7);
//	write("DDDDDD", 13, 9, 9);
//}

//void write(string text = "", int color = 7, short x = -1, short y = -1) {
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(h, color);
//    if (x != -1 && y != -1)
//        SetConsoleCursorPosition(h, { x, y });
//    cout << text << "\n";
//}
//
//int main() {
//    // write("Alexander", 14, 5, 5);
//    write("Alexander", 14, 5);
//    write("second line", 14);
//}

// void write(string text, int color, short x, short y) {
// void write(string text, int color, short x, short y = -1) {
// void write(string text, int color, short x = -1, short y = -1) {
// void write(string text, int color = 7, short x = -1, short y = -1) {
//void write(string text = "", int color = 7, short x = -1, short y = -1) {
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(h, color);
//    if (x != -1 && y != -1)
//        SetConsoleCursorPosition(h, { x, y });
//    cout << text << "\n";
//}

//int main() {
    // write("Alexander", 14, 5, 5);
    /*write("Alexander", 14, 5);
    write("second line", 14);*/
    // write(y : 5, x : 13, text : "Alex"); // в С++ немає іменованих параметрів
//}

//void rectangle(int width = 5, int height = 5, int color = 8) {
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(h, color);
//
//    for (int i = 0; i < height; i++) {
//        for (int j = 0; j < width; j++) {
//            cout << "#";
//        }
//        cout << "\n";
//    }
//}
//
//int main() {
//    rectangle(15, 10, 12);
//    cout << "\n";
//    rectangle(15, 10);
//    cout << "\n";
//    rectangle();
//}

// приклад перевантаження функцій (перегразка, overloading)
// в одній і тій самій області видимості присутні більше однієї версії фунції
// 1) назви функціїї співпадають 
// 2) мають відрізнатися сігнатури (списки параметрів)
// як зрозуміти що сигнатури відрізняютсья 
// - різна кількість параметрів
// - різні типи параметрів
// - різний порядок параметрів
// - різні типи повертаємого значення (не впливає на сигнатуру)



//void summ(int a, int b) { // int, int
//	cout << "INT + INT\n";
//	cout << a + b << "\n";
//}
//
//void summ(int a, double b) { // int, int
//	cout << "INT + INT\n";
//	cout << a + b << "\n";
//}
//
//void summ(double a, int b) { // int, int
//	cout << "INT + INT\n";
//	cout << a + b << "\n";
//}
//
//void summ(double a, double b) { // double, double
//	cout << "DOUBLE + DOUBLE\n";
//    cout << a + b << "\n";
//}
//
//void summ(double a, double b, double c) { // double, double
//	cout << "DOUBLE + DOUBLE + DOUBLE\n";
//	cout << a + b + c << "\n";
//}
//
//void summ(string a, string b) { // int, int
//	cout << "STRING + STRING\n";
//	cout << a + b << "\n"; // конкатенація поєднання рядків
//}
//
//void summ(int ar[], const int SIZE) { // int, int
//	cout << "INT ARRAY\n";
//	int result = 0;
//	for (int i = 0; i < SIZE; i++) {
//		result = +ar[i];
//	}
//	cout << result << "\n";
//}
//
//int main() {
//	//summ(2, 2); // 2 - літерал типу інт, і тому компілятор шукає спочатку хоча б одну версію функції 
//	//// якщо знайдена одна версія, то перевіряється наявність інших версій
//	//// якщо знайдено більше 1 версії, то відбувається пошук функції, яка найбільше підходить за переданими аргументами (інт + інт)
//
//	//summ(2.3, 4.5); // 2.3 - літерал типу дабл, і тому компілятор шукає спочатку хоча б одну версію функції
//	//summ(1, 2.2); // 1 - літерал типу інт, 2.2 - літерал типу дабл
//	//summ(1.1, 2); // 1.1 - літерал типу дабл, 2 - літерал типу інт
//}

//void summ(double a = 0, double b = 0, double c = 0) {
//    // cout << "DOUBLE + DOUBLE + DOUBLE\n";
//    cout << a + b + c << "\n";
//}
//
//int main() {
//    summ(1, 2, 3);
//    summ(1, 2);
//    summ(1);
//    summ();
//    summ(1.1, 2.2, 3.3);
//    summ(1.1, 2.2);
//    summ(1.1);
//    summ(1.1, 2.2, 3);
//    summ(1.1, 2, 3.3);
//    summ(1, 2.2, 3.3);
//    summ(1, 2.2, 3);
//    summ(1, 2, 3.3);
//    summ(1.1, 2, 3);
//    summ('a', 'b', 'c');
//    summ(1000000000000000000LL, 2000000000000000000LL, 3000000000000000000LL);
//}

// для коректного перевантаження потрібно 3 умови:
// 1 - є 2 або більше версії функцій з однаковими назвами
// 2 - всі версії функцій мають відрізнятися сигнатурами (сигнатури унікальні!)
// 3 - немає бути НЕОДНОЗНАЧНОСТІ виклику (є лише ОДНА версія функції, яка ідеально підходить під виклик)

//void summ(int a, int b) { // 2 3
//    cout << "INT + INT\n";
//    cout << a + b << "\n";
//}
//
//void summ(double a, double b) { // 2.0 3.3
//    cout << "DOUBLE + DOUBLE\n";
//    cout << a + b << "\n";
//}
//
//void summ(int a, double b) { // 2.0 3.3
//    cout << "INT + DOUBLE\n";
//    cout << a + b << "\n";
//}
//
//int main() {
//    summ(2, 2); // int int
//    summ(2.3, 4.5); // double double
//    summ(2, 3.3); 
//	// summ (2.2, 3); // ERROR! ambigious call (неоднозначний виклик) або написати ще одну функцію
//}

//Перевантаження(overloading) функції — це існування в одній області видимості кількох функцій з однаковими ідентифікаторами, 
//але з різними сигнатурами.Третьою і дуже важливою умовою є однозначність виклику.

//Однозначність виклику — це ситуація, коли є тільки один варіант перевантаженої функції, який підходить для виклику.

//void summ(int a, int b) {
//    cout << "INT + INT\n";
//    cout << a + b << "\n";
//}
//
//void summ(int a, int b, int c = 0) {
//    cout << "INT + INT + INT\n";
//    cout << a + b + c << "\n";
//}
//
//int main() {
//    // summ(1, 2, 3); // OK
//    // summ(1, 2); // ERROR!!!
//}

// при виклику звичайної функції відбувається:
    // 1) копіювання значень аргументів (треба 2 додаткові комірки оперативної пам'яті по 4 байти (зайві 8 байтів буде витрачено)
    // 2) зміна контексту (з області видимості функції мейн треба дістатися області виимості функції сумм) - програмі треба буде знайти адресу в ОП де знаходиться функція сумм
    // 3) збереження інформації про те, куди треба буде повернутися після того, як відпрацює функція сумм 
    // 4) будь яка звичайна функція займає додаткове місце в оперативній пам'яті + якісь байти машинного коду на рівні файла зо виконується 
    // (розмір ехе файла росте якщо функцій багато) 

// вбудована функція
// функція стає ВБУДОВАНОЮ
// нажаль не кожну функццію моєна позначити інлайн так щоби це спрацювало
// недоліки (які оператори не можуть бути всередині тыла функції):
// 1) - if, switch, ?:
// 2) - while, do...while, for
// 3) - більше 2 рядків коду
// 4) - вкладені виклики, наприклад summ(summ(1, 2) , summ (3, 4))
// 5) - рекурсивні виклики

// інлайн це побажання для компілятора, аде не вимога!!!
//inline int summ(int a, int b) {
//    cout << "INT + INT\n";
//    return a + b;
//}
//
//int main() {
//
//    // summ(1, 2); // виклик функції перетворюється на:
//    // cout << "INT + INT\n"; // оці 2 рядки підставляються компілятором на місце виклику функції
//    // cout << 1 + 2 << "\n";
//
//    // переваги:
//    // 1 - не відбувається зміни контексту
//    // 2 - не копіюються аргументи
//    // 3 - не витрачається зайва пам'ять
//    // 4 - не витричаються байти машинного коду - всередині ехе-файла ВЗАГАЛІ НЕ БУДЕ окремої функції
//
//	cout << summ(summ(1, 2), summ(3, 4)) << "\n"; // 10
//}
 
// якщо нема порушеннь інлайності (нема умов циклів рекурсії складних викликів)
// то компілятор бере і сам виставляє ключове слово інлайн!
//int summ(int a, int b) {
//	cout << "INT + INT\n";
//	return a + b;
//}
//
//int main() {
//
//}

//Гарна функція — це функція, яка отримує дані   у вигляді локальних параметрів і ніяк           
//не залежить від глобальних даних.Завдяки добрим функціям у програмі дотримується принцип поділу коду.

//Нерухома функція — це та, в якій використовуються додаткові підключення глобальних змінних.

//void bubble_sort(int ar[], const int SIZE) {
//    // pr - прохід (перебірка всіх елементів масиву від початку до кінця, або з кінця до початку)
//    for (int pr = 0; pr < SIZE; pr++)
//    {
//        for (int index = SIZE - 1; index > 0; index--)
//        {
//            if (ar[index] < ar[index - 1]) {
//                int temp = ar[index];
//                ar[index] = ar[index - 1];
//                ar[index - 1] = temp;
//            }
//        }
//    }
//}
//
//void print_array(int ar[], const int SIZE) {
//    for (int i = 0; i < SIZE; i++)
//        cout << ar[i] << ", ";
//    cout << "\n\n";
//}
//
//int main() {
//    const int SIZE = 10;
//    int ar[SIZE] = { 5, 17, 43, 28, 33, 50, 16, 28, 20, 88 };
//    print_array(ar, SIZE); // до сортування
//    bubble_sort(ar, SIZE); // процес сортування
//    print_array(ar, SIZE); // після сортування
//}

//void bubble_sort(int ar[], const int SIZE) {
//    for (int pr = 0; pr < SIZE; pr++)
//        for (int index = SIZE - 1; index > 0; index--)
//            if (ar[index] < ar[index - 1])
//                swap(ar[index], ar[index - 1]);
//}
//
//void print_array(int ar[], const int SIZE) {
//    for (int i = 0; i < SIZE; i++)
//        cout << ar[i] << ", ";
//    cout << "\n\n";
//}
//
//int main() {
//    const int SIZE = 10;
//    int ar[SIZE] = { 5, 17, 43, 28, 33, 50, 16, 28, 20, 88 };
//    print_array(ar, SIZE); // до сортування
//    bubble_sort(ar, SIZE); // процес сортування
//    print_array(ar, SIZE); // після сортування
//}

//void bubble_sort(double ar[], const int SIZE) {
//    for (int pr = 0; pr < SIZE; pr++)
//        for (int index = SIZE - 1; index > 0; index--)
//            if (ar[index] < ar[index - 1])
//                swap(ar[index], ar[index - 1]);
//}
//
//void bubble_sort(int ar[], const int SIZE) {
//    for (int pr = 0; pr < SIZE; pr++)
//        for (int index = SIZE - 1; index > 0; index--)
//            if (ar[index] < ar[index - 1])
//                swap(ar[index], ar[index - 1]);
//}
//
//void bubble_sort(string ar[], const int SIZE) {
//    for (int pr = 0; pr < SIZE; pr++)
//        for (int index = SIZE - 1; index > 0; index--)
//            if (ar[index] < ar[index - 1])
//                swap(ar[index], ar[index - 1]);
//}
//
//void print_array(double ar[], const int SIZE) {
//    for (int i = 0; i < SIZE; i++)
//        cout << ar[i] << ", ";
//    cout << "\n\n";
//}
//
//void print_array(int ar[], const int SIZE) {
//    for (int i = 0; i < SIZE; i++)
//        cout << ar[i] << ", ";
//    cout << "\n\n";
//}
//
//void print_array(string ar[], const int SIZE) {
//    for (int i = 0; i < SIZE; i++)
//        cout << ar[i] << ", ";
//    cout << "\n\n";
//}
//
//int main() {
//    const int SIZE = 10;
//    double ar[SIZE] = { 5.5, 17.7, 43.3, 28.8, 33.3, 50.1, 16.6, 28, 20, 88 };
//    print_array(ar, SIZE); // до сортування
//    bubble_sort(ar, SIZE); // процес сортування
//    print_array(ar, SIZE); // після сортування
//
//    int br[SIZE] = { 5, 17, 43, 28, 33, 50, 16, 28, 20, 88 };
//    print_array(br, SIZE); // до сортування
//    bubble_sort(br, SIZE); // процес сортування
//    print_array(br, SIZE); // після сортування
//
//    string cities[SIZE] = { "Odesa", "Kyiv", "Mykolaiv", "Lviv",
//        "Chernivtsi", "Vynnytsya", "Kharkiv", "Ochakiv",
//        "Chernomorsk", "Paris" };
//    print_array(cities, SIZE); // до сортування
//    bubble_sort(cities, SIZE); // процес сортування
//    print_array(cities, SIZE); // після сортування
//}

//-----------------------------------------------------
//ШАБЛОН

//template <typename T> // T - параметр типу (сюди можна передати тип)
//void bubble_sort(T ar[], const int SIZE) {
//    for (int pr = 0; pr < SIZE; pr++)
//        for (int index = SIZE - 1; index > 0; index--)
//            if (ar[index] < ar[index - 1])
//                swap(ar[index], ar[index - 1]);
//}

// якщо передати в якості параметру типу дабл - вперше! - то компілятор створить таку функцію самостійно:
//void bubble_sort(double ar[], const int SIZE) {
//    for (int pr = 0; pr < SIZE; pr++)
//        for (int index = SIZE - 1; index > 0; index--)
//            if (ar[index] < ar[index - 1])
//                swap(ar[index], ar[index - 1]);
//}

//void bubble_sort(int ar[], const int SIZE) {
//    for (int pr = 0; pr < SIZE; pr++)
//        for (int index = SIZE - 1; index > 0; index--)
//            if (ar[index] < ar[index - 1])
//                swap(ar[index], ar[index - 1]);
//}

//template <typename T>
//void print_array(T ar[], const int SIZE) {
//    for (int i = 0; i < SIZE; i++)
//        cout << ar[i] << ", ";
//    cout << "\n\n";
//}
//
//int main() {
//    const int SIZE = 10;
//    double ar[SIZE] = { 5.5, 17.7, 43.3, 28.8, 33.3, 50.1, 16.6, 28, 20, 88 };
//    print_array(ar, SIZE); // до сортування
//    bubble_sort(ar, SIZE); // процес сортування
//    print_array(ar, SIZE); // після сортування
//
//    int br[SIZE] = { 5, 17, 43, 28, 33, 50, 16, 28, 20, 88 };
//    print_array(br, SIZE); // до сортування
//    bubble_sort(br, SIZE); // процес сортування
//    print_array(br, SIZE); // після сортування
//
//    string cities[SIZE] = { "Odesa", "Kyiv", "Mykolaiv", "Lviv",
//        "Chernivtsi", "Vynnytsya", "Kharkiv", "Ochakiv",
//        "Chernomorsk", "Paris" };
//    print_array(cities, SIZE); // до сортування
//    bubble_sort(cities, SIZE); // процес сортування
//    print_array(cities, SIZE); // після сортування
//}

//-----------------------------------------------------
//РЕКУРСІЯ

// рекурсія - це функція, яка викликає сама себе
// рекурсивна функція - це функція, яка викликає сама себе
// рекурсивний виклик - це виклик функції, яка викликає сама себе

//int main(); // косвенна рекурсія, визиває саму себе
//
//void test() {
//	cout << "test!\n"; // показує тест
//	main(); // пряма рекурсія, визиває саму себе
//}
//
//int main () {
//	cout << "main!\n"; // показує мейн
//    main(); // пряма рекурсія, визиває саму себе
//}