#include <iostream>

int main() {
    using namespace std;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;

    cout << "First, enter the degrees: ";
    int degrees;
    cin >> degrees;

    cout << "Next, enter the minutes of arc: ";
    int minutes;
    cin >> minutes;

    cout << "Finally, enter the seconds of arc: ";
    int seconds;
    cin >> seconds;

    const double factor = 60.0;
    double totalDegrees = degrees + (minutes + seconds / factor) / factor;
    cout << degrees << " degrees, "
         << minutes << " minutes, "
         << seconds << " seconds = "
         << totalDegrees << " degrees" << endl;

    return 0;
}