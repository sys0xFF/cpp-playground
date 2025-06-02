// lesson-02_variables.cpp
#include <iostream>
using namespace std;

int main() {
   
    int age = 18;                 
    float height = 1.75f;           
    double balance = 1234.56;       
    char letter = 'A';              
    bool alive = true;               

    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Balance: " << balance << endl;
    cout << "Letter: " << letter << endl;
    cout << "Alive: " << (alive ? "Yes" : "No") << endl;

    age = age + 2;
    balance -= 200.0;

    cout << "\n--- Updated ---" << endl;
    cout << "New Age: " << age << endl;
    cout << "New Balance: " << balance << endl;

    return 0;
}
