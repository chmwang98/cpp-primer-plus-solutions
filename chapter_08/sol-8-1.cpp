#include <iostream>
using namespace std;

void printString(const char *s, int n = 0) {
    static int count = 1;
    if (count) {
        for (int i = 0; i < count; i++) {
            cout << s << endl;
        }
    }
    count++;
}

int main() {
    char s[] = "Hello, world!";
    int n;
    cout << "Enter a number, nonzero to print string (q to quit): ";
    while (cin >> n) {
        printString(s, n);
        cout << "Enter a number, nonzero to print string (q to quit): ";
    }
    return 0;
}