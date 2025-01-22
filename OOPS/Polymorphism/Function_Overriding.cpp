#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override { // Function overriding
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a1;
    Dog d;
    Cat c;

    a1 = &d;
    a1->sound(); // Output: Dog barks (runtime polymorphism)

    a1 = &c;
    a1->sound(); // Output: Cat meows (runtime polymorphism)

    return 0;
}
