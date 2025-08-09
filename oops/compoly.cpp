#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;
    cout << "Sum of 2 integers: " << calc.add(5, 3) << endl;
    cout << "Sum of 2 doubles: " << calc.add(5.5, 2.3) << endl;
    cout << "Sum of 3 integers: " << calc.add(1, 2, 3) << endl;

    return 0;
}
