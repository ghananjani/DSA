#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;
    cout << "Sum (int, int): " << calc.add(3, 4) << endl;        // Calls add(int, int)
    cout << "Sum (double, double): " << calc.add(3.5, 4.2) << endl; // Calls add(double, double)
    cout << "Sum (int, int, int): " << calc.add(1, 2, 3) << endl;   // Calls add(int, int, int)
    return 0;
}
