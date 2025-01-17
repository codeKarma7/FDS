#include <iostream>
using namespace std;

int main() {
    int matrix[2][2], transpose[2][2];

    // Input
    cout << "Enter the elements of a 2x2 matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrix[i][j];
        }
    }

    // transpose of the matrix
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display the result
    cout << "Transpose of the matrix is:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
