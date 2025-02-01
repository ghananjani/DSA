#include <iostream>
using namespace std;

class Parent {
public:
    virtual void show() { // Virtual function in base class
        cout << "I am a Parent" << endl;
    }
};

class Child : public Parent {
public:
    void show() override { // Overriding the function
        cout << "I am a Child" << endl;
    }
};

int main() {
    Child c;
    c.show(); // Output: I am a Child

    return 0;
}
