#include <iostream>
using namespace std;

void menu();

int main() {
    menu();
    char ch;
    while (ch != 'c' && ch != 'p' && ch != 't' && ch != 'g') {
        cout << "Please enter a c, p, t, or g: ";
        cin >> ch;
    }
    
    switch (ch) {
        case 'c':
            cout << "A lion is a carnivore" << endl;
            break;
        case 'p':
            cout << "Langlang is a pianist" << endl;
            break;
        case 't':
            cout << "A maple is a tree" << endl;
            break;
        case 'g':
            cout << "Brawl stars is a game" << endl;
            break;
    }
    return 0;
}

void menu() {
    cout << "Please enter one of the following choices:" << endl;
    cout << "c) carnivore\t\t" << "p) pianist" << endl;
    cout << "t) tree\t\t" << "g) game" << endl;
}