// lesson-01_pointers.cpp
#include <iostream>

using namespace std;

int main() {

    // 1. Basic pointer usage
    int age = 25;
    int* ptr = &age;
    cout << "Value of age: " << age << endl;
    cout << "Address of age (&age): " << &age << endl;
    cout << "Pointer ptr holds: " << ptr << endl;
    cout << "Value pointed by ptr (*ptr): " << *ptr << endl;

    // 2. Changing the value via pointer
    *ptr = 21;
    cout << "New value of age after *ptr = 21: " << age << endl;

    // 3. Null pointers
    int* nullPtr = nullptr;
    cout << "Null pointer: " << nullPtr << endl;

    // 4. Pointers and arrays
    int numbers[] = {10,20,30};
    int* pNumbers = numbers;
    cout << "First element via pointer: " << *pNumbers << endl;
    cout << "Second element via pointer arithmetic: " << *(pNumbers + 1) << endl;

    // 5. Dynamic memory allocation
    int* dynamicInt = new int;
    *dynamicInt = 99;
    cout << "Dynamically allocated int: " << *dynamicInt << endl;
    delete dynamicInt; // Always need to clean up
    dynamicInt = nullptr;

    // 6. Checking pointer before dereferencing
    if (dynamicInt != nullPtr) {
        cout << "Pointer is valid" << *dynamicInt << endl;
    } else {
        cout << "Pointer is null, cannot deference" << endl;
    }
    
    return 0;
}