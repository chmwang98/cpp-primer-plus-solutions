#include <iostream>

int main() {
    using namespace std;
    cout << "Enter the world's population: ";
    long long worldsPolulation;
    cin >> worldsPolulation;

    cout << "Enter the population of your country: ";
    long yourPopulation;
    cin >> yourPopulation;

    double percentage = double(yourPopulation) / worldsPolulation * 100;
    cout << "The population of your country is "
         << percentage << "% of the world population."
         << endl;

    return 0;
}