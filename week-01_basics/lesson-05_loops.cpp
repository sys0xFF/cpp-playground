// lesson-05_loops.cpp
#include <iostream>

using namespace std;

int main(){ 
    //For loop: count from 1 to 5
    cout << "FOR LOOP:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "i = " << i << endl;
    }

    //While loop: Count until the number is equal to 5
    cout << "\nWHILE LOOP:" << endl;
    int x = 1;
    while (x <= 5) {
        cout << "x = " << x << endl;
        x++;
    }

    // Do While loop: executes at least 1 time
    cout << "\nDO...WHILE LOOP:" << endl;
    int y = 6;
    do {
        cout << "y = " << y << endl;
        y++;
    } while (y <= 5);

    return 0;
}