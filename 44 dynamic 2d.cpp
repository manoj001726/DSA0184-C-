#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    if (rows <= 0 || cols <= 0) {
        cout << "Invalid number of rows or columns entered." << endl;
        return 1; 
    }
    int **dynamicArray = new int *[rows]; 

    // Creating rows
    for (int i = 0; i < rows; ++i) {
        dynamicArray[i] = new int[cols];
    }

    cout << "Enter elements of the 2D dynamic array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> dynamicArray[i][j];
        }
    }

    cout << "Values in the 2D dynamic array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << dynamicArray[i][j] << " ";
        }
        cout << endl;
    }


    for (int i = 0; i < rows; ++i) {
        delete[] dynamicArray[i]; 
    }
    delete[] dynamicArray;

    return 0;
}

