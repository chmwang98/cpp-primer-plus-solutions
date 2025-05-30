#include <iostream>

int main() {
    using namespace std;
    cout << "Enter number of rows: ";
    int row;
    cin >> row;
    for (int i = 1; i <= row; i++) {
        for (int j = i; j < row; j++) {
            cout << ".";
        }
        for (int j = i; j > 0; j--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}