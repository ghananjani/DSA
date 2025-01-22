//In single inheritance, a derived class inherits from a single base class.
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "This animal can eat." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "This dog can bark." << endl;
    }
};

int main() {
    Dog d;
    d.eat();  // Inherited from Animal
    d.bark(); // Defined in Dog
    return 0;
}
