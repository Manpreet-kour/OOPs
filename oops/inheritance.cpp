#include <iostream>
using namespace std;

// 🔹 Base Class
class A {
public:
    void showA() {
        cout << "Class A\n";
    }
};

// 🔹 Single Inheritance: B -> A
class B : public A {
public:
    void showB() {
        cout << "Class B (Single Inheritance)\n";
    }
};

// 🔹 Multilevel Inheritance: C -> B -> A
class C : public B {
public:
    void showC() {
        cout << "Class C (Multilevel Inheritance)\n";
    }
};

// 🔹 Hierarchical Inheritance: D and E -> A
class D : public A {
public:
    void showD() {
        cout << "Class D (Hierarchical Inheritance)\n";
    }
};

class E : public A {
public:
    void showE() {
        cout << "Class E (Hierarchical Inheritance)\n";
    }
};

// 🔹 Multiple Inheritance: F -> D, E
class F : public D, public E {
public:
    void showF() {
        cout << "Class F (Multiple + Hybrid Inheritance)\n";
    }
};

int main() {
    cout << "----- Single Inheritance -----\n";
    B b;
    b.showA();
    b.showB();

    cout << "\n----- Multilevel Inheritance -----\n";
    C c;
    c.showA();
    c.showB();
    c.showC();

    cout << "\n----- Hierarchical Inheritance -----\n";
    D d;
    d.showA();
    d.showD();

    E e;
    e.showA();
    e.showE();

    cout << "\n----- Hybrid Inheritance (Multiple + Hierarchical) -----\n";
    F f;
    f.D::showA();  // Resolving ambiguity
    f.E::showA();
    f.showD();
    f.showE();
    f.showF();

    return 0;
}
