#include <iostream>
#include <array>

using namespace std;

int main() {
    array<float, 3> times;
    cout << "Enter first time for 40m dash: ";
    cin >> times[0];
    cout << "Enter second time for 40m dash: ";
    cin >> times[1];
    cout << "Enter third time for 40m dash: ";
    cin >> times[2];

    float average = (times[0] + times[1] + times[2]) / 3;
    cout << "First time: " << times[0] << endl
         << "Second time: " << times[1] << endl
         << "Third time: " << times[2] << endl
         << "Average time: " << average << endl;
    return 0;
}