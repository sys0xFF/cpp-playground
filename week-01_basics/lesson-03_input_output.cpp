// lesson-03_input_output.cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    float height;

    cout << "Enter your name: ";
    getline(cin, name); 

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height (in meters): ";
    cin >> height;

    cout << "\n--- User Information ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Height: " << height << " m" << endl;

    return 0;
}