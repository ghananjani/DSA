//In multiple inheritance, a derived class inherits from two or more base classes.

cpp
Copy
Edit
#include <iostream>
using namespace std;

class Parent1 {
public:
    void showParent1() {
        cout << "This is Parent1." << endl;
    }
};

class Parent2 {
public:
    void showParent2() {
        cout << "This is Parent2." << endl;
    }
};

class Child : public Parent1, public Parent2 {
public:
    void showChild() {
        cout << "This is the child class." << endl;
    }
};

int main() {
    Child c;
    c.showParent1(); // From Parent1
    c.showParent2(); // From Parent2
    c.showChild();   // From Child
    return 0;
}
