#include <iostream>
using namespace std;

typedef double (*pf)(double, double);
double calculate(double a, double b, pf p) {
    return p(a, b);
}

double add(double a, double b) {
    return a + b;
}

double sub(double a, double b) {
    return a - b;
}

double mult(double a, double b) {
    return a * b;
}

int main() {
    double (*p[3])(double, double) = {add, sub, mult};
    double a, b;
    cout << "Enter two values (q to quit): ";
    while (cin >> a >> b) {
        cout << a << " + " << b << " = " << calculate(a, b, p[0]) << endl;
        cout << a << " - " << b << " = " << calculate(a, b, p[1]) << endl;
        cout << a << " * " << b << " = " << calculate(a, b, p[2]) << endl;
        cout << "Enter two values (q to quit): ";
    }
    return 0;
}