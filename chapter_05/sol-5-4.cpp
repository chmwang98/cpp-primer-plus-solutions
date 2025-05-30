#include <iostream>

int main() {
    using namespace std;
    const float originalBalance = 100;
    float dBalance = originalBalance;
    float dRate = 0.1;
    float cBalance = originalBalance;
    float cRate = 0.05;

    int year = 0;

    while (dBalance >= cBalance) {
        dBalance += originalBalance * dRate;
        cBalance += cBalance * cRate;
        year++;
        cout << "Year " << year
             << ", Balance of Daphne is " << dBalance
             << ", Balance of Cloe is " << cBalance << endl;
    }

    return 0;
}