#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0; // No implementation here
    virtual double area() = 0; // Forces subclasses to implement
};

class Circle : public Shape {
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void draw() override {
        cout << "Drawing a Circle" << endl;
    }

    double area() override {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }

    double area() override {
        return length * width;
    }
};

int main() {
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 6.0);

    shape1->draw();
    cout << "Area of Circle: " << shape1->area() << endl;

    shape2->draw();
    cout << "Area of Rectangle: " << shape2->area() << endl;

    delete shape1;
    delete shape2;

    return 0;
}


/* 
In C++, abstraction is achieved through:

Abstract Classes: Classes with at least one pure virtual function.
Interfaces: Implemented using abstract classes (or classes with only pure virtual functions).
Abstract Class:

The Shape class defines a blueprint with pure virtual functions (draw() and area()), but no implementation.
This forces all derived classes (Circle and Rectangle) to provide their own implementation.
Abstraction in Action:

Users interact with shapes through the Shape class interface (draw() and area()), without worrying about the specific implementation for circles or rectangles.
*/
