#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("example.txt");  // Try opening the file
    if (file) {
        cout << "File exists!" << endl;
    } else {
        cout << "File does not exist!" << endl;
    }
    return 0;
}
