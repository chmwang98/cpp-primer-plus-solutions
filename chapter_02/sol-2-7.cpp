#include <iostream>

using namespace std;

double displayTime(int hours, int minutes) {
    cout << "Time: " << hours << ":" << minutes << endl;
}

int main() {
    cout << "Enter the number of hours: ";
    int hours;
    cin >> hours;

    cout << "Enter the number of minutes: ";
    int minutes;
    cin >> minutes;

    displayTime(hours, minutes);

    return 0;
}
