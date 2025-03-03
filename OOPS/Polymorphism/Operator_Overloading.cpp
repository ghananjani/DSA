#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    // Constructor
    Complex(int r, int i) : real(r), imag(i) {}

    // Overload the + operator
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    // Display function
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);

    // Use overloaded + operator
    Complex c3 = c1 + c2;

    c3.display(); // Output: 4 + 6i
    return 0;
}
