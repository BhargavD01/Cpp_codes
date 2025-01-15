#include <iostream>
using namespace std;

// Function to traverse and print the array elements
void traverseArray(int arr[], int size) {
    cout << "Array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Define an array and its size
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Call the function to traverse the array
    traverseArray(arr, size);

    return 0;
w