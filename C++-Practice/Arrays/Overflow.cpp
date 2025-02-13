#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // Full array of size 5
    int n = 5;  
    int index = 2, value = 99; 

    // Check if array is full
    if (n >= 5) {
        cout << "Error: Array is full, cannot insert!" << endl;
    } else {
        // Shift elements right
        for (int i = n; i > index; i--) {
            arr[i] = arr[i - 1];
        }

        arr[index] = value; // Insert new value
        n++; // Increase size

        // Print updated array
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
