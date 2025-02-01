#include <iostream>
#include <stdexcept>  // For invalid_argument
using namespace std;

int convertToInt(string str) {
    if (str.empty()) {
        throw invalid_argument("Error: Empty string cannot be converted to integer!");
    }
    return stoi(str);  // Converts string to int
}

int main() {
    try {
        cout << convertToInt("") << endl;  // Passing empty string
    }
    catch (invalid_argument &e) {
        cout << e.what() << endl;
    }

    return 0;
}
