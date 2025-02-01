#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt", ios::app);  // Open in append mode
    if (file.is_open()) {
        file << "Appending new data.\n";
        file.close();
        cout << "Data appended successfully!" << endl;
    } else {
        cout << "Error opening file!" << endl;
    }
    return 0;
}
