// lesson-04_if_else.cpp
#include <iostream>
#include <cctype> // for tolower

using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    //if-else (even or odd)
    if (number % 2 == 0) {
        cout << number << " is even.\n";
    } else {
        cout << number << " is odd.\n";
    }

    //else-if (positive,negative,zero)
    if (number > 0) {
        cout << number << " is positive.\n";
    } else if (number < 0) {
        cout << number << " is negative.\n";
    } else {
        cout << number << " The number is zero.\n";
    }

    //if-with-to-lower (grade check)
    char grade;
    cout << "Enter your grade (A, B or C):";
    cin >> grade;

    grade = tolower(grade); //convert to lower

    if (grade == 'a') {
        cout << "Excellent! You got an A.\n";
    } else if (grade == 'b') {
        cout << "Good job! You got a B.\n";
    } else if (grade == 'c') {
        cout << "You passed with a C.\n";
    } else {
        cout << "Invalid Grade!\n";
    }
    
    return 0;

}