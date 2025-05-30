#include <iostream>

int main() {
    using namespace std;
    double num;
    double sum{};
    cout << "Enter number (0 for terminate): ";
    cin >> num;
    while (num != 0) {
        sum += num;
        cout << "Sum = " << sum << endl;
        cout << "Enter number (0 for terminate): ";
        cin >> num;
    }
    return 0;
}