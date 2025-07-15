// lesson-03_dynamic_memory.cpp

// -------------------------------------------------------------
// Dynamic Memory explanation:
//
// - Dynamic memory allows allocating memory at runtime using 
//   operators 'new' and deallocating it using 'delete'.
// - Useful when you don't know the size needed at compile time.
//
// Key points:
// - 'new' allocates memory on the heap and returns a pointer.
// - Always pair 'new' with 'delete' to avoid memory leaks.
// - For arrays use 'new[]' and 'delete[]'.
//
// In this lesson, demonstrate allocating a single int, 
// an array of ints, modifying them, and cleaning up.
// -------------------------------------------------------------

#include <iostream>

using namespace std;

int main() {
    // 1. Allocating a single int dynamically
    int* pNumber = new int; // allocates memory for one int
    *pNumber = 42;
    cout << "Value at pointer: " << *pNumber << endl;

    // Free allocated memory
    delete pNumber;
    pNumber = nullptr;

    // 2. Allocating an array dynamically
    int size = 5;
    int* pArray = new int[size]; // allocates array of ints

    // Fill array with values
    for (int i = 0; i < size; i++) {
        pArray[i] = (i + 1) * 10;
    }

    // Print array contents
    cout << "Array contents: ";
    for (int i = 0; i < size; i++) {
        cout << pArray[i] << " ";
    }
    cout << endl;

    // Free the allocated array
    delete[] pArray;
    pArray = nullptr;

    return 0;
}
