// lesson-01_classes.cpp

// -------------------------------------------------------------
// Classes in C++ explanation:
//
// - A class is a blueprint for creating objects (instances).
// - Classes encapsulate data (attributes) and functions (methods)
//   that operate on that data.
//
// Key points:
// - Define class with `class` keyword.
// - Use `public:` to expose members, `private:` to hide them.
// - Create objects from the class, access members using '.'.
//
// In this lesson, demonstrate a simple class with private 
// attributes, public methods, and creating objects to use them.
// -------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

// Define a simple class
class Car {
private:
    string brand;
    int year;

public:
    // Constructor
    Car(string b, int y) {
        brand = b;
        year = y;
    }

    // Method to display info
    void displayInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }

    // Setter to change year
    void setYear(int y) {
        year = y;
    }

    // Getter to get year
    int getYear() {
        return year;
    }
};

int main() {
    // Create object of class Car
    Car myCar("Toyota", 2010);
    myCar.displayInfo();

    // Modify year using setter
    myCar.setYear(2022);
    cout << "After updating year: ";
    myCar.displayInfo();

    // Access year using getter
    int manufactureYear = myCar.getYear();
    cout << "Manufacture year accessed via getter: " << manufactureYear << endl;

    return 0;
}
