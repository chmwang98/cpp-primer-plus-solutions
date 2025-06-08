#include <iostream>
#include <cctype>
using namespace std;

int main() {
    double donations[10];
    int len = 0;
    double sum = 0.0;

    cout << "Enter up to 10 donation amounts (non-number to stop):\n";
    while (len < 10 && cin >> donations[len]) {
        sum += donations[len];
        len++;
    }

    if (len == 0) {
        cout << "No valid input" << endl;
        return 0;
    }

    double avg = sum / len;
    int larger = 0;
    for (int i = 0; i < len; i++) {
        if (donations[i] > avg) larger++;
    }
    cout << "Average of numbers: " << avg << endl;
    cout << larger << " numbers are greater than average." << endl;
    return 0;
}