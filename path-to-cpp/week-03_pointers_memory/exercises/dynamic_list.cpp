// dynamic_list.cpp
#include <iostream>

using namespace std;

int main() {
    int size;

    // Ask the user for the size of the list
    cout << "Enter the size of the dynamic list: ";
    cin >> size;

    if (!size) {
        cout << "The input need to be a number!" << '\n';
        return -1;
    } 

    int* list = new int[size];

    // Fill the list 
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> list[i];
    }

    // Print the content
    cout << "You entered: ";
    for (int i = 0; i < size; i++ ) {
        cout << list[i] << " ";
    }
    cout << endl;

    delete[] list;

    return 0;
}
