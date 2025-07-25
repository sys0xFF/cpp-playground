#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

string secret_word = "WATERMELON";
map<char, bool> guessed;
vector<char> wrong_guesses;
int errors = 0;
const int MAX_ERRORS = 6;

void print_header() {
    cout << "********************" << endl;
    cout << "*** HANGMAN GAME ***" << endl;
    cout << "********************" << endl << endl;
}

void print_word() {
    for (char letter : secret_word) {
        if (guessed[letter]) {
            cout << letter << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl;
}

void print_errors() {
    cout << "Number of errors: " << errors << endl;
    cout << "Wrong guesses: ";
    for (char letter : wrong_guesses)
    {
        cout << letter << " ";
    }
    cout << endl;
}

bool not_guessed_correctly() {
    for (char letter : secret_word) {
        if (!guessed[letter]) {
            return true;
        }
    }
    return false;
}

bool not_hanged() {
    return errors < MAX_ERRORS;
}

bool letter_exists(char guess) {
    for (char letter : secret_word) {
        if (guess == letter) {
            return true;
        }
    }
    return false;
}

vector<string> read_file() {
    ifstream file;
    file.open("words.txt");

    if (!file.is_open()) {
        cout << "Could not access the word database." << endl;
        exit(0);
    }
    
    int word_count;
    file >> word_count;

    vector<string> words_from_file;

    for (int i = 0; i < word_count; i++) {
        string read_word;
        file >> read_word;
        //cout << "On line " << i << " : " << read_word << endl;
        words_from_file.push_back(read_word);
    }

    file.close();
    return words_from_file;
}

void draw_word() {
    vector<string> words = read_file();

    srand(time(NULL));
    int drawn_index = rand() % words.size();

    secret_word = words[drawn_index];

}

void save_file(vector<string> new_list) {
    ofstream file;
    file.open("words.txt");

    if (!file.is_open()) {
        cout << "Could not access the word database." << endl;
        exit(0);
    }

    file << new_list.size() << endl;
    
    for (string word : new_list) {
        file << word << endl;
    }

    file.close();
}

void add_word() {
    cout << "Enter the new word using uppercase letters." << endl;
    string new_word;
    cin >> new_word;

    vector<string> word_list = read_file();
    word_list.push_back(new_word);

    save_file(word_list);
}

int main() {
    print_header();

    read_file();
    draw_word();

    while (not_guessed_correctly() && not_hanged()) {
        print_word();
        print_errors();
        
        cout << "Enter your guess: ";
        char guess;
        cin >> guess;
        
        guessed[guess] = true;

        if (letter_exists(guess)) {
            cout << "You got it! The letter '" << guess << "' is in the word!" << endl;
        } else {
            cout << "You missed! The letter '" << guess << "' is not in the word." << endl;
            wrong_guesses.push_back(guess);
            errors++;
        }
        
        cout << endl;
    }

    cout << "Game over!" << endl;
    cout << "The secret word was: " << secret_word << endl;
    
    if (!not_guessed_correctly()) {
        cout << "Congratulations! You won!" << endl;
        cout << "Do you want to add a new word to the word database? (Y/N)" << endl;
        char winner_option;
        cin >> winner_option;
        if (winner_option == 'Y') {
            add_word();
        }
        else {
            return 0;
        }
    } else {
        cout << "You were hanged! Try again." << endl;
    }

    return 0;
}