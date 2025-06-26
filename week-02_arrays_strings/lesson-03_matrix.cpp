// lesson-03_matrix.cpp
#include <iostream>

using namespace std;

int main() {
    // 1. Declare and initialize a 2x3 matrix (2 rows, 3 columns)
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // 2. Accessing a specific element
    cout << "Element at row 0, column 1: " << matrix[0][1] << endl; // Should print 2

    // 3. Modifying a value
    matrix[1][2] = 99;
    cout << "New value at row 1, column 2: " << matrix[1][2] << endl;

    // 4. Printing the entire matrix using nested loops
    cout << "Full matrix content: " << endl;
    for (int i = 0; i < 2; i++) { // row loop
        for (int j = 0; j < 3; j++) { // column loop
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // 5. Calculating the sum of all elements in the matrix
    int sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
    }
    cout << "Sum of all elements: " << sum << endl;

    // Extra

    int target = 99;
    bool found = false;
    cout << "Searching for value: " << target << endl;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            if (matrix[i][j] == target) {
                cout << "Found at row " << i << ", column " << j << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "Value not found in the matrix." << endl;
    }

    return 0;
}