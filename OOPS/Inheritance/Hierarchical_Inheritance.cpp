//In hierarchical inheritance, multiple derived classes share a single base class.

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

class Dog : public Animal {
public:
    void bark() {
        cout << "This dog can bark." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "This cat can meow." << endl;
    }
};

int main() {
    Dog d;
    d.eat();  // From Animal
    d.bark(); // From Dog

    Cat c;
    c.eat();  // From Animal
    c.meow(); // From Cat

    return 0;
}
