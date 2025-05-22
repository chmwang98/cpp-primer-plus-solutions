#include <iostream>

using namespace std;

double convert(double lightYear) {
    return lightYear * 63240;
}

int main() {
    cout << "Enter the number of light years: ";
    double lightYear;
    cin >> lightYear;

    cout << lightYear << " light years = "
         << convert(lightYear) << " astronomical units." << endl;

    return 0;
}
