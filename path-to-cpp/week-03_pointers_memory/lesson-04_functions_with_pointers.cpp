// lesson-04_functions_with_pointers.cpp

// -------------------------------------------------------------
// Functions with Pointers explanation:
//
// - Pointers can be passed to functions to allow them to 
//   modify the original variable (pass by address).
// - Useful for modifying data in-place and for efficiency.
//
// Key points:
// - Use '*' in function parameters to receive a pointer.
// - Use '&' to pass the address of a variable.
// - Can also return pointers from functions.
//
// In this lesson, demonstrate passing a pointer to a function
// that modifies the original value, and a function that returns
// a pointer to a dynamically allocated array.
// -------------------------------------------------------------

#include <iostream>

using namespace std;

// Function that takes a pointer to int and doubles the value
void doubleValue(int* p) {
    if (p != nullptr) {
        *p *= 2;
    }
}

// Function that creates an array of size 'n' and returns pointer
int* createArray(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    return arr;
}

int main() {
    // 1. Modify a variable via pointer in function
    int number = 10;
    cout << "Original number: " << number << endl;
    doubleValue(&number);
    cout << "After doubleValue: " << number << endl;

    // 2. Use function that returns a pointer to array
    int size = 4;
    int* pArr = createArray(size);

    cout << "Array returned from createArray: ";
    for (int i = 0; i < size; i++) {
        cout << pArr[i] << " ";
    }
    cout << endl;

    // Clean up dynamic memory
    delete[] pArr;
    pArr = nullptr;

    return 0;
}