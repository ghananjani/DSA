//In hybrid inheritance, multiple types of inheritance are combined (e.g., hierarchical and multiple inheritance). Virtual inheritance is often used to avoid ambiguity.

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

class Mammal : virtual public Animal {
};

class Bird : virtual public Animal {
};

class Bat : public Mammal, public Bird {
public:
    void fly() {
        cout << "This bat can fly." << endl;
    }
};

int main() {
    Bat b;
    b.eat(); // No ambiguity due to virtual inheritance
    b.fly(); // From Bat
    return 0;
}
