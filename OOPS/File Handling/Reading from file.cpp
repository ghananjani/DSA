#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("example.txt");  // Opening the file for reading
    string line;

    if (file.is_open()) {
        while (getline(file, line)) {  // Read line by line
            cout << line << endl;
        }
        file.close();  // Closing the file
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}
