//In multilevel inheritance, a derived class is inherited from another derived class.

cpp
Copy
Edit
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "This animal can eat." << endl;
    }
};

class Mammal : public Animal {
public:
    void walk() {
        cout << "This mammal can walk." << endl;
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "This dog can bark." << endl;
    }
};

int main() {
    Dog d;
    d.eat();  // From Animal
    d.walk(); // From Mammal
    d.bark(); // From Dog
    return 0;
}
