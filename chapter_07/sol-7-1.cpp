#include <iostream>
using namespace std;

double harmonicMean(double a, double b) {
    return 2.0 * a * b / (a + b);
}

int main() {
    double a, b;
    cout << "Enter two numbers (0 to quit): ";
    while (cin >> a >> b && a != 0 && b != 0) {
        cout << "harmonic mean = " << harmonicMean(a, b) << endl;
        cout << "Enter two numbers (0 to quit): ";
    }
    return 0;
}