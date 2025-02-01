#include <iostream>
#include <fstream>  // File handling library
using namespace std;

int main() {
    ofstream file("example.txt");  // Creates/Open a file
    if (file.is_open()) {
        file << "Hello, this is a test file.\n";  // Writing to file
        file << "File handling in C++ is easy!\n";
        file.close();  // Closing the file
        cout << "Data written successfully!" << endl;
    } else {
        cout << "Error opening file!" << endl;
    }
    return 0;
}
