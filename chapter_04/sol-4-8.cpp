#include <iostream>
#include <string>
using namespace std;

struct Pizza {
    string name;
    float diameter;
    float weight;
};

int main() {
    Pizza *myPizza = new Pizza;
    cout << "Enter diameter of the pizza: ";
    (cin >> myPizza->diameter).get();
    cout << "Enter name of the pizza company: ";
    getline(cin, myPizza->name);
    cout << "Enter weight of the pizza: ";
    cin >> myPizza->weight;

    cout << "Pizza company: " << myPizza->name << endl
         << "Diameter: " << myPizza->diameter << endl
         << "Weight: " << myPizza->weight << endl;
    delete myPizza;
    return 0;
}