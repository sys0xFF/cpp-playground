// palindrome.cpp
#include <iostream>
#include <string>

using namespace std;

//Variables declarations
string text;
string reversed;

int main() {

    cout << "Welcome to sys0xFF's Palindrome Checker" << endl;
    cout << "---------------------------------------\n" << endl;
    cout << "Enter the word you want to check: " << endl;
    cin >> text;

    //Makes the palindrome
    reversed = string(text.rbegin(), text.rend());

    if (text == reversed) {
        cout << "Your word is a palindrome." << endl;
    } else {
        cout << "Your word is not a palindrome." << endl;
    }
    
    return 0;
}
