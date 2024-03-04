#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the square matrix: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size entered." << endl;
        return 1; 
    }

    int matrix[size][size];

    cout << "Enter elements of the square matrix:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> matrix[i][j];
        }
    }

    int mainDiagonalSum = 0;
    for (int i = 0; i < size; ++i) {
        mainDiagonalSum += matrix[i][i];
    }

    int secondaryDiagonalSum = 0;
    for (int i = 0; i < size; ++i) {
        secondaryDiagonalSum += matrix[i][size - 1 - i];
    }

    cout << "Sum of main diagonal: " << mainDiagonalSum << endl;
    cout << "Sum of secondary diagonal: " << secondaryDiagonalSum << endl;

    return 0;
}

