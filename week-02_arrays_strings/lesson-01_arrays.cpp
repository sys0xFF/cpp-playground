// lesson-01_arrays.cpp
#include <iostream>

using namespace std;

int main() {
    // 1. Declare and initialize an array
    int numbers[5] = {10, 20, 30, 40, 50};

    // 2. Accessing elements by index
    cout << "The first number is: " << numbers[0] << endl;
    cout << "The last number is: " << numbers[4] << endl;

    // 3. Modifying an element
    numbers[2] = 99;
    cout << "The new third number is: " << numbers[2] << endl;

    // 4. Loop through the array using a for loop
    cout << "All numbers in the array: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // 5. Calculate sum and average
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    double average = static_cast<double>(sum) / 5;

    cout << "Sum of numbers: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}