#include <iostream>
#include <string>

int main() {
    using namespace std;
    cout << "What is your first name? ";
    string firstName;
    getline(cin, firstName);

    cout << "What is your last name? ";
    string lastName;
    getline(cin, lastName);

    cout << "What letter grade do you deserve? ";
    char grade;
    cin >> grade;
    grade = grade + 1;

    cout << "What is your age? ";
    int age;
    cin >> age;

    cout << "Name: " << lastName << ", " << firstName << endl
         << "Grade: " << grade << endl
         << "Age: " << age << endl;

    return 0;
}