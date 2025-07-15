// lesson-06_functions.cpp
#include <iostream>

using namespace std;

//Function declaration
void greet();
int sum(int a, int b);

// NOTE: In C++, the main function must return an int, not void.
// Using 'void main()' is non-standard and may lead to undefined behavior.
// The correct signature is 'int main()', which should return 0 to indicate successful execution.

//Main function
int main() {
    greet();

    int result = sum(5, 6);
    cout << "Sum is: " << result << endl;

    return 0;
}

//Function definitions
void greet() {
    cout << "Welcome to lesson 06 - Functions!" << endl;
}

int sum(int a, int b) {
    return a + b;
}


