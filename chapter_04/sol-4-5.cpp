#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
    string name;
    float weight;
    int calories;
};

int main() {
    CandyBar snack {"Mocha Munch", 2.3, 350};
    cout << "Name: " << snack.name << endl
         << "Weight: " << snack.weight << endl
         << "Calories: " << snack.calories << endl;
    return 0;
}