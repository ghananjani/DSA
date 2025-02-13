#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5};  
    int n = 5;  
    int index = n - 1, value = 99; // Insert 99 at second-last position

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

    return 0;
}
