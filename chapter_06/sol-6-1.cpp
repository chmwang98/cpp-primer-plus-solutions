#include <iostream>
#include <cctype>
using namespace std;

int main() {
    cout << "Enter text for analysis, type @ to terminate" << endl;
    char ch;
    cin.get(ch);
    while (ch != '@') {
        if (isdigit(ch)) {
            cin.get(ch);
            continue;
        } else if (isupper(ch)) {
            ch = tolower(ch);
        } else if (islower(ch)) {
            ch = toupper(ch);
        }
        cout << ch;
        cin.get(ch);
    }
    cout << endl;
    return 0;
}