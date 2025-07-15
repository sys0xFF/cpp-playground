// lesson-02_strings.cpp
#include <iostream>
#include <string> // Required for std::string

using namespace std;

int main() {

    // 1. C-style string (character array)
    char nameCStyle[] = "Anthony";
    cout << "C-style string: " << nameCStyle << endl;

    // 2. Modern string using std::string
    string firstName = "Anthony";
    string lastName = "Sforzin";

    // 3. String concatenation using '+' operator
    string fullName = firstName + " " + lastName;
    cout << "Full name: " << fullName << endl;

    // 4. Getting the length of the string
    cout << "Length of full name: " << fullName.length() << endl;

    // 5. Accessing characters using index
    cout << "First letter: " << fullName[0] << endl;

    // 6. Modifying a character at a specific index
    fullName[0] = 'a';
    cout << "Modified name: " << fullName << endl;

    // 7. Reading a full line of input with spaces
    string favoriteQuote;
    cout << "Enter your favorite quote: ";
    getline(cin, favoriteQuote); // Allows reading input with spaces
    cout << "Your quote: " << favoriteQuote << endl;

    // 8. Comparing strings using '=='
    if (firstName == "Anthony") {
        cout << "Your name is Anthony." << endl;
    } else {
        cout << "Your name is not Anthony." << endl;
    }

    return 0;
}