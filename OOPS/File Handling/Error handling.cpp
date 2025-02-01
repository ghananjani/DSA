#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("nonexistent.txt");  // Try to open a non-existing file
    if (!file) {
        cout << "Error: File could not be opened!" << endl;
        return 1;  // Exit with error code
    }

    cout << "File opened successfully!" << endl;
    return 0;
}
