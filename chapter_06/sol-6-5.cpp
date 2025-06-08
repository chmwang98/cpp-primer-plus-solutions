#include <iostream>
using namespace std;

int main() {
    cout << "Enter tvarps (negative number or non-numeric for quit): ";
    int income;
    cin >> income;
    float tax;
    while (cin && income >= 0) {
        tax = 0;
        if (income <= 5000) {
            tax = 0;
        } else if (income <= 15000) {
            tax = (income - 5000) * 0.1;
        } else if (income <= 35000) {
            tax = 10000 * 0.1 + (income - 15000) * 0.15;
        } else {
            tax = 10000 * 0.1 + 20000 * 0.15 + (income - 35000) * 0.2;
        }
        cout << "Tax = " << tax << endl;
        cout << "Enter tvarps (negative number or non-numeric for quit): ";
        cin >> income;
    }
    return 0;
}