#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() { // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override { // Overriding the function
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a; // Base class pointer
    Dog d;
    
    a = &d; 
    a->makeSound(); // Output: Dog barks (calls derived class function)
    
    return 0;
}
