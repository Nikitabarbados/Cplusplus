#include "myarray.h"
using namespace std;

int main() {
    int size = 5;
    int* arr = createArray(size);

    fillArray(arr, size);
    printArray(arr, size);

    arr = pushFront(arr, size, 111);
    printArray(arr, size);

    arr = pushBack(arr, size, 222);
    printArray(arr, size);

    arr = insertAt(arr, size, 2, 333);
    printArray(arr, size);

    arr = popFront(arr, size);
    printArray(arr, size);

    arr = popBack(arr, size);
    printArray(arr, size);

    arr = removeAt(arr, size, 2);
    printArray(arr, size);

    deleteArray(arr);
    return 0;
}
