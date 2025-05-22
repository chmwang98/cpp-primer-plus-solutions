#include <iostream>

using namespace std;

double convert(double celsius) {
    return celsius * 1.8 + 32.0;
}

int main() {
    double celsius;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;

    double fahrenheit = convert(celsius);
    cout << celsius << " degrees Celsius is "
         << fahrenheit << " degrees Fahrenheit." << endl;
         
    return 0;
}
