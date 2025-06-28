// grades_average.cpp
#include <iostream>
#include <string>
#include <iomanip> // for fixed and setprecision

using namespace std;

// Grades array
float grades[6] = {10, 9.5, 5.5, 6, 4, 8};

// Global variables and function declaration
void lines();
string input;
float average = 0;
float sum = 0;

int main() {
    cout << "Welcome to sys0xFF [Grade Average.cpp]" << endl;

    lines(); // prints a separator line

    cout << "Do you want to see the student's average grade?" << endl;
    cout << "Press ENTER to proceed" << endl;

    getline(cin, input); // reads a full line from user

    if (input.empty()) { // checks if user just pressed ENTER
        // sum all grades
        for (int i = 0; i < 6; i++) {
            sum += grades[i];
        }

        average = sum / 6; // calculate the average

        // print average with 1 decimal place
        cout << "The student's average grade is: "
             << fixed << setprecision(1)
             << average << endl;
    } else {
        cout << "Something went wrong!" << endl;
    }

    return 0;
}

// prints a decorative line
void lines() {
    cout << "-----------------------------\n" << endl;
}
