#include <iostream>
#include <stdexcept> // Standard exception library
using namespace std;

double divide(int a, int b) {
    if (b == 0) {
        throw runtime_error("Error: Division by zero!"); // Throwing built-in exception
    }
    return (double)a / b;
}

int main() {
    try {
        cout << "Result: " << divide(10, 0) << endl;  // This will throw an exception
    } 
    catch (runtime_error &e) {  // Catching the exception
        cout << e.what() << endl;
    }

    cout << "Program continues..." << endl;
    return 0;
}
