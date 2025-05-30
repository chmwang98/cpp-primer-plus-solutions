#include <iostream>

int main() {
    using namespace std;
    const int kMonths = 12;
    const string months[kMonths] = {
        "January", "February", "March", "April", "May", "June", "July",
        "August", "September", "October", "November", "December"};

    const int kYears = 3;
    int sales[kYears][kMonths];
    int total = 0;
    for (int year = 0; year < kYears; year++) {
        int sum{0};
        cout << "Year " << year << endl;
        for (int month = 0; month < kMonths; month++) {
            cout << "Enter sales in " << months[month] << ": ";
            cin >> sales[year][month];
            sum += sales[year][month];
        }
        cout << "Sales in year " << year << ": " << sum << endl;
        total += sum;
    }

    cout << "Sales in last " << kYears << " years: " << total << endl;

    return 0;
}