// dynamic_registration.cpp
#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    int age;

    void print() {
        cout << "Name: " << name << "Age: " << age << endl;
    }
};

int main() {
    int numPeople;

    cout << "Enter the number of people: ";
    cin >> numPeople;

    Person* people = new Person[numPeople];

    for (int i = 0; i < numPeople; i++) {
        cout << "Enter name of person " << i + 1 << ": ";
        cin.ignore();
        getline(cin, people[i].name);

        cout << "Enter age of " << people[i].name << ": ";
        cin >> people[i].age;
    }

    cout << "\nRegistered people:\n";
    for (int i = 0; i < numPeople; i++) {
        people[i].print();
    }

    delete[] people;

    return 0;
}