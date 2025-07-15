// lesson-02_references.cpp

// -------------------------------------------------------------
// References explanation:
//
// - A reference is an alias for another variable. Once set, it 
//   cannot be changed to refer to another variable. 
//   Think of it as another name for the same memory location.
//
// - Unlike pointers, references cannot be null and do not 
//   require dereferencing with '*'. You use them just like 
//   normal variables.
//
// Why use references?
// - They provide safer syntax than pointers.
// - Useful for function parameters to avoid copying large data.
// - Enable modifying the original variable passed to a function.
//
// In this lesson, demonstrate creating references, using them 
// to modify values, and passing by reference to functions.
// -------------------------------------------------------------

#include <iostream>

using namespace std;

// Function that takes an int by reference and modifies it
void increment(int& num) {
    num += 1
}

// Function that swaps two values using references
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    // 1. Basic reference usage
    int value = 42;
    int& ref = value; // ref is a reference to value

    cout << "Original value: " << value << endl;
    cout << "Reference ref: " << ref << endl;

    // 2. Modifying through reference
    ref = 100;
    cout << "Value after modifying through ref: " << value << endl;

    // 3. Using references in functions
    int x = 5;
    cout << "x before increment: " << x << endl;
    increment(x);
    cout << "x after increment: " << x << endl;

    // 4. Swapping using references
    int a = 10, int b = 20;
    cout << "Before swap a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swap a = " << a << ", b = " << b << endl;

    return 0;
}
