#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    cout << "*********************************\n"
         << "* Welcome to the guessing game! *\n"
         << "*********************************\n";

    cout << "Choose your difficulty level: \n"
         << "Easy (E), Medium (M) or Hard (H) \n";

    char difficulty;
    cin >> difficulty;

    int number_of_attempts;

    if (difficulty == 'E')
    {
        number_of_attempts = 15;
    }
    else if (difficulty == 'M')
    {
        number_of_attempts = 10;
    }
    else      
    {
        number_of_attempts = 5;
    }

    srand(time(NULL));
    const int SECRET_NUMBER = rand() % 100;
    cout << "The secret number is " << SECRET_NUMBER << ". Don't tell anyone!" << endl;
    
    bool not_guessed = true;
    int attempts = 0;

    double points = 1000.0;

    for(attempts = 1; attempts <= number_of_attempts; attempts++) {
        int guess;
        cout << "What's your guess?: ";
        cin >> guess;

        double points_lost = abs(guess - SECRET_NUMBER) / 2.0; // Abs(absolute) returns absolute values to avoid negative numbers, and we're purposely using 2 as decimal since we want a result with decimal places, one of the numbers needs to be decimal.
        points = points - points_lost;

        cout << "Your guess value is: " << guess << endl;

        bool correct = guess == SECRET_NUMBER;
        bool higher = guess > SECRET_NUMBER;
        bool lower = guess < SECRET_NUMBER;

        if (correct)
        {
            cout << "Congratulations! You guessed the secret number!" << endl;
            not_guessed = false;
            break;  
        }
        else if (higher)
        {
            cout << "Your guess was higher than the secret number." << endl;
        }
        else if (lower)
        {
            cout << "Your guess was lower than the secret number." << endl;
        }
        else
        {
            cout << "The guess value must be an integer!" << endl;
        }
    }
    cout << "Game over" << endl;

    if (not_guessed)
    {
        cout << "You lost! Try again!" << endl;
    }
    else
    {
        cout << "You guessed the secret number in " << attempts << " attempts!" << endl;
        cout.precision(2); // We do this to have 2 decimal places after the point.
        cout << fixed;     // And this part is necessary to avoid scientific notation and fix the point.
        cout << "Your score was: " << points << " points" << endl;
    }

    return 0;
}