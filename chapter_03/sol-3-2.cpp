#include <iostream>

int main() {
    using namespace std;
    int feet, inches, pounds;
    cout << "Enter your height in feet and inches (e.g.: 5 8):______\b\b\b\b\b\b";
    cin >> feet >> inches;
    cout << "Enter your weight in pounds (e.g.: 120):______\b\b\b\b\b\b";
    cin >> pounds;

    const int kFootToInches = 12;
    int heightInches = feet * kFootToInches + inches;

    const double kInchToMeter = 0.0254;
    double heightMeter = heightInches * kInchToMeter;

    const double kPoundToKg = 2.2;
    double weightKg = pounds / kPoundToKg;

    double bmi = weightKg / (heightMeter * heightMeter);

    cout << endl
         << "Your BMI is " << bmi << endl;

    return 0;
}