#include <iostream>
#include <cstring>

int main() {
    using namespace std;
    const int kSize = 30;
    
    cout << "Enter your first name: ";
    char firstName[kSize];
    cin.getline(firstName, kSize);

    cout << "Enter your last name: ";
    char lastName[kSize];
    cin.getline(lastName, kSize);

    char fullName[2 * kSize + 3] = {};
    strcat(fullName, lastName);
    strcat(fullName, ", ");
    strcat(fullName, firstName);

    cout << "Here's the information in a single string: "
         << fullName << endl;
    return 0;
}