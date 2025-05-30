#include <iostream>

int main() {
    using namespace std;
    const int kMonths = 12;
    const string months[kMonths] = {
        "January", "February", "March", "April", "May", "June", "July",
        "August", "September", "October", "November", "December"};

    int sales[kMonths];
    int sum{0};
    for (int i = 0; i < kMonths; i++) {
        cout << "Enter sales in " << months[i] << ": ";
        cin >> sales[i];
        sum += sales[i];
    }
    cout << "Sales in this year: " << sum << endl;

    return 0;
}