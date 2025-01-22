//Multipath inheritance occurs when a derived class inherits from two or more classes that have a common base class. Without virtual inheritance, it causes ambiguity.

Without Virtual Inheritance (Ambiguity Issue):
cpp
Copy
Edit
#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display." << endl;
    }
};

class Class1 : public Base {
};

class Class2 : public Base {
};

class Derived : public Class1, public Class2 {
};

int main() {
    Derived d;
    // d.display(); // Compilation error: Ambiguity
    return 0;
}
With Virtual Inheritance (Resolved):
cpp
Copy
Edit
#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display." << endl;
    }
};

class Class1 : virtual public Base {
};

class Class2 : virtual public Base {
};

class Derived : public Class1, public Class2 {
};

int main() {
    Derived d;
    d.display(); // No ambiguity
    return 0;
}
