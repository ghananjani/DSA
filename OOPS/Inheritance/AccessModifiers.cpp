#include <iostream>
using namespace std;

class MyClass {
private:
    int privateValue = 10; // Only accessible inside the class

protected:
    int protectedValue = 20; // Accessible inside the class and by derived classes

public:
    int publicValue = 30; // Accessible from anywhere

    // Public method to access private data
    void showPrivateValue() {
        cout << "Private Value: " << privateValue << endl;
    }
};

class Derived : public MyClass {
public:
    void showProtectedValue() {
        cout << "Protected Value: " << protectedValue << endl; // Accessing protected member
    }
};

int main() {
    MyClass obj;

    // obj.privateValue = 50;  // ❌ Error: privateValue is private
    obj.showPrivateValue();    // ✅ Allowed through a public method

    // obj.protectedValue = 60; // ❌ Error: protectedValue is protected
    obj.publicValue = 70;       // ✅ Accessible directly
    cout << "Public Value: " << obj.publicValue << endl;

    Derived derivedObj;
    derivedObj.showProtectedValue(); // ✅ Accessing protectedValue through derived class method

    return 0;
}

/* privateValue:

Cannot be accessed directly (obj.privateValue gives an error).
It is accessed using the public method showPrivateValue().
protectedValue:

Cannot be accessed directly from main (obj.protectedValue gives an error).
It is accessed from the derived class using the showProtectedValue() method.
publicValue:

Directly accessible anywhere (obj.publicValue = 70 works fine).*/
