/*
    This program demonstrates how to build a basic option menu using a while loop.
    
    Loop Control Breakdown:
    
    - while (true): creates an infinite loop that runs until explicitly broken. 
      Useful for menus and interactive programs.
    
    - break: immediately exits the nearest loop. 
      In this example, it's used to exit the menu when the user chooses option 3.
    
    - continue: skips the current iteration of the loop and goes to the next cycle.
      (Not used in this example, but could be used to re-display the menu without executing anything.)

    - cin >> option: receives user input to determine which menu option to execute.
    
    Common control flow pattern in menus:
    1. Show options
    2. Wait for input
    3. Execute based on input
    4. Repeat or exit
*/

// option_menu.cpp
#include <iostream>
using namespace std;

int main() {
    int option;

    while (true) {
        cout << "\n--- Main Menu ---\n";
        cout << "1. Calculator\n";
        cout << "2. Guessing Game\n";
        cout << "3. Exit\n";
        cout << "Choose an option: ";
        cin >> option;

        if (option == 1) {
            cout << "[Calculator launched...]\n";
        } else if (option == 2) {
            cout << "[Guessing Game launched...]\n";
        } else if (option == 3) {
            cout << "Exiting...\n";
            break;
        } else {
            cout << "Invalid option. Try again.\n";
        }
    }

    return 0;
}
