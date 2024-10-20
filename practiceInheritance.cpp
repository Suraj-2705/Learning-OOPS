#include <iostream>
using namespace std;

// Base class Shape
class Shape {
public:
    // Virtual method to calculate the area (to be overridden by derived classes)
    virtual double area() = 0;

    // Method to display the area
    void display_area() {
        cout << "Area: " << area() << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Overriding area() method to calculate the area of a rectangle
    double area() override {
        return length * width;
    }

    // Method to display the area of the rectangle
    void display_area() {
        cout << "Rectangle Area: " << area() << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;
    const double PI = 3.14159; // Constant value for pi

public:
    // Constructor to initialize the radius
    Circle(double r) : radius(r) {}

    // Overriding area() method to calculate the area of a circle
    double area() override {
        return PI * radius * radius;
    }

    // Method to display the area of the circle
    void display_area() {
        cout << "Circle Area: " << area() << endl;
    }
};

// Main function to test the classes
int main() {
    // Create a rectangle with length 5 and width 4
    Rectangle rect(5, 4);
    rect.display_area(); // Output: Rectangle Area: 20

    // Create a circle with radius 3
    Circle circ(3);
    circ.display_area(); // Output: Circle Area: 28.2735

    return 0;
}
