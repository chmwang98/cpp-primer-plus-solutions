#include <iostream>
using namespace std;

int factorial(int n, int fac) {
    if (n == 0) return fac;
    return factorial(n - 1, n * fac);
}

int main() {
    int n;
    cout << "Enter a number (negative value to exit): ";
    while (cin >> n && n >= 0) {
        cout << n << "! = " << factorial(n, 1) << endl;
        cout << "Enter a number (negative value to exit): ";
    }
    return 0;
}