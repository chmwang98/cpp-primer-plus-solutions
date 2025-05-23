#include <iostream>

int main() {
    using namespace std;
    cout << "Enter the number of seconds: ";
    long number, temp;
    cin >> number;

    const int kMinToSec = 60;
    int seconds = number % kMinToSec;
    temp = number / kMinToSec;

    const int kHourToMin = 60;
    int minutes = temp % kHourToMin;
    temp /= kHourToMin;

    const int kDayToHour = 24;
    int hours = temp % kDayToHour;
    int days = temp / kDayToHour;

    cout << number << " seconds = "
         << days << " days, "
         << hours << " hours, "
         << minutes << " minutes, "
         << seconds << " seconds" << endl;

    return 0;
}