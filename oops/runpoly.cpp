#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat meows" << endl;
    }
};

void makeItSpeak(Animal* a) {
    a->speak(); // Resolved at runtime
}

int main() {
    Dog d;
    Cat c;

    Animal* a1 = &d;
    Animal* a2 = &c;

    makeItSpeak(a1);  // Output: Dog barks
    makeItSpeak(a2);  // Output: Cat meows

    return 0;
}
