// swap_with_pointer.cpp
#include <iostream>

using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    cout << "Enter first integer: ";
    cin >> x;
    cout << "Enter second integer: ";
    cin >> y;

    cout << "\nBefore swapping: x = " << x << ", y = " << y << endl;

    swap(&x, &y);

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}