// lesson-04_structs.cpp
#include <iostream>
#include <string>

using namespace std;


// 1. Define a struct named 'Person'
struct Person {
    string name;
    int age;
    float height;
};


void printPerson(const Person& p);



int main() {
    // 2. Declare and initalize a Person object
    Person p1;
    p1.name = "Alice";
    p1.age = 25;
    p1.height = 1.68;

    // 3. Print values from the struct
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Height: " << p1.height << endl;

    // 4. Create an array of structs
    Person people[2];

    people[0] = {"Bob", 30, 1.75};
    people[1] = {"Carol", 22, 1.60};

    // 5. Loop through the array and print data
    cout << "\nList of people:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Name " << people[i].name
             << ", Age: " << people[i].age
             << ", Height: " << people[i].height << "m" << endl;
    }

    printPerson(p1);

    return 0;
}

// Extra
void printPerson(const Person& p) {
    cout << p.name << endl;
}