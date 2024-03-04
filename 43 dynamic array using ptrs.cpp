#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the dynamic array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size entered." << endl;
        return 1; 
    }

    int *dynamicArray = new int[size];

    cout << "Enter elements of the dynamic array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> dynamicArray[i];
    }

    cout << "Values in the dynamic array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    delete[] dynamicArray;

    return 0;
}

