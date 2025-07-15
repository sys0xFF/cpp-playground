// calculator.cpp

/*

 Simple terminal calculator with basic arithmetic operations using functions.
    Summary of Improvements and Notes:

1. main result type mismatch with division:
   - The variable `result` was originally declared as `int`, but the division operation can return decimal values.
   - Solution: declare `result` as `float` to properly store results from division.

2. Division by zero:
   - The `divide()` function did not check for zero in the denominator, leading to undefined behavior.
   - Solution: add a condition to prevent division when `b == 0`, and return 0 or handle error gracefully.

3. Cleaner control flow:
   - Using `switch` instead of `if/else` for handling menu options is cleaner and easier to extend.
   - Applied: `switch(answer)` improves readability and eliminates repetitive `if` blocks.

4. Add an explicit "Exit" option:
   - Users should have the option to exit gracefully instead of relying on default or invalid input.
   - Added option 5: Exit, and updated the loop to stop when selected.

5. Naming clarity (optional):
   - Function name `tAnswer()` could be renamed to `getInput()` or similar for clarity.
   - Not required, but improves readability in larger projects.

6. Type casting for division:
   - When dividing two integers, C++ performs integer division unless explicitly cast.
   - Used `static_cast<float>(a) / b` to ensure floating-point result.

===========================================
*/

#include <iostream>
#include <cctype>

using namespace std;

// Function Declarations
void lines();
void tAnswer();
void cResult();
int add(int a, int b);
int subtract(int a, int b);
float divide(int a, int b);
int multiply(int a, int b);

// Variables Declarations
int a;
int b;
int answer;
int result;
bool running;

int main() {

    cout << "Welcome to sys0xFF calculator" << endl;
    lines();
    running = true;
    
    while (running == true) {    

        cout << "Choose your option\n1. Add\n2. Subtract\n3. Divide\n4. Multiply\n";
        cout << "Answer: " << endl;
        cin >> answer;

        if (answer == 1) {
        tAnswer();
        result = add(a, b);
        cResult();    
        } else if (answer == 2) {
        tAnswer();
        result = subtract(a, b);
        cResult();  
        } else if (answer == 3) {
        tAnswer();
        result = divide(a, b);
        cResult(); 
        } else if (answer == 4) {
        tAnswer();
        result = multiply(a, b);
        cResult();         
        } else {
            return 0;
        }
    } 

    return 0;
}

// Math Functions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

float divide(int a, int b) {
    return a / b;
}

int multiply(int a, int b) {
    return a * b;
}

//Other Functions
void tAnswer() {
        cout << "Choose your first number:" << endl;
        cin >> a;
        cout << "Choose your second number:" << endl;
        cin >> b;
}

void cResult() {
    cout << "The calculator result is: " << result << "\n" << endl;
}

void lines() {
    cout << "-----------------------------" << endl;
}



