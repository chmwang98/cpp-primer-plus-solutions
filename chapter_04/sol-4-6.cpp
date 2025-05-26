#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
    string name;
    float weight;
    int calories;
};

int main() {
    CandyBar snacks[3];
    snacks[0] = {"Mocha Munch", 2.3, 350};
    snacks[1] = {"Oreo", 1.0, 240};
    snacks[2] = {"Snickers", 4.0, 400};
    cout << "Snack 1" << endl
         << "Name: " << snacks[0].name << endl
         << "Weight: " << snacks[0].weight << endl
         << "Calories: " << snacks[0].calories << endl;

    cout << "Snack 2" << endl
         << "Name: " << snacks[1].name << endl
         << "Weight: " << snacks[1].weight << endl
         << "Calories: " << snacks[1].calories << endl;

    cout << "Snack 3" << endl
         << "Name: " << snacks[2].name << endl
         << "Weight: " << snacks[2].weight << endl
         << "Calories: " << snacks[2].calories << endl;
    return 0;
}