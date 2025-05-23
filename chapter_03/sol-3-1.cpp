#include <iostream>

int main() {
    using namespace std;
    int inches;
    cout << "Enter your height in inches:___\b\b\b";
    cin >> inches;

    const int kFootToInch{12};
    cout << endl
         << "Your height is "
         << inches / kFootToInch << " feet "
         << inches % kFootToInch << " inches." << endl;

    return 0;
}