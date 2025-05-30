#include <iostream>

int main() {
    using namespace std;
    cout << "Enter a small interger: ";
    int a;
    cin >> a;

    cout << "Enter a larger interger: ";
    int b;
    cin >> b;

    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
    }

    cout << "Sum of all intergers from "
         << a << " to " << b
         << " is " << sum << endl;

    return 0;
}