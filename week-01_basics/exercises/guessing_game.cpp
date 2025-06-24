// guessing_game.cpp

/*

 Guessing Game using C++ random and loop logic.
    Summary of Improvements and Notes:

1. Random number not initialized on start:
   - The variable `secretNumber` was set to a fixed value (`25`) instead of using the random logic at the beginning.
   - Solution: initialize `secretNumber = distr(gen);` at the start to make the first round random.

2. Missing input validation (cin >> answeredNumber):
   - If the user enters a non-numeric value (e.g., a letter), `cin` enters a fail state and the loop can behave unexpectedly.
   - Solution: use `cin.fail()`, `cin.clear()`, and `cin.ignore()` to validate and sanitize the input.

3. Grammar improvements in output messages:
   - Some English sentences were unnatural or had small grammatical mistakes.
   - Suggested edits:
     - "The answered number is higher the secret number!" → "The entered number is higher than the secret number!"
     - "The answer need to be an number" → "The input must be a number!"

4. Unused include directive:
   - The file included `<cctype>` but did not use any functions from it.
   - Solution: remove the unused `#include <cctype>` to keep the includes clean.

5. Post-win logic clarity:
   - When the user guesses correctly, the game asks whether to restart or exit.
   - Improvement: better handle unexpected inputs (neither 1 nor 2) to avoid confusion or loop continuation.

6. Optional: enhanced UX (user experience):
   - Optionally, clear the screen between attempts or after a game restart to reduce clutter.
   - Can use `system("cls");` (on Windows) or `system("clear");` (on Linux/macOS), with caution.

7. Consistent variable naming:
   - Variable name `answeredNumber` is fine, but `guess` or `userGuess` might be more intuitive.
   - Not critical, but improves readability in larger codebases.

===========================================
*/

#include <iostream>
#include <cctype>
#include <random>

using namespace std;

int answeredNumber;
int secretNumber = 25;
int option;

    int main() {

    //Random Logic
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 100);

    cout << "Welcome to sys0xFF Guessing Game" << "\n";
    cout << "--------------------------------" << "\n\n";
    cout << "You need to find the secret number by typing random numbers\nand the program will tell you if it is higher or lower" << "\n";
    
    do {
        cout << "Type your choice: " << endl;
        
        cin >> answeredNumber;

        if (answeredNumber == secretNumber) {
            cout << "Congrats! You found the secret number!" << endl;
            cout << "You want to play again with a different number?\n1. Yes 2. No" << endl;
            cin >> option;
            if (option == 1) {
                secretNumber = distr(gen);
            } else if (option == 2) {
                return 0;
            } else {
                cout << "Invalid Option!" << endl;
            }
        } else if (answeredNumber > secretNumber) {
            cout << "The entered number is higher than the secret number!" << endl;        
        } else if (answeredNumber < secretNumber) {
            cout << "The entered number is lower than the secret number!" << endl;
        } else {
            cout << "The input must be a number!" << endl;
        }
    } while (answeredNumber != secretNumber);

    return 0;
    }