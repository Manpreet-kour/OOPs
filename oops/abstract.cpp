#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual void area() = 0;  // Pure virtual function
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}
    void area() override {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, breadth;
public:
    Rectangle(float l, float b) : length(l), breadth(b) {}
    void area() override {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};

int main() {
    Shape* s1 = new Circle(5);
    Shape* s2 = new Rectangle(4, 6);
    s1->area();  // Output: Area of Circle
    s2->area();  // Output: Area of Rectangle
    return 0;
}
