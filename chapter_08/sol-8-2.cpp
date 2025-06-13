#include <iostream>
#include <cstring>
using namespace std;

const int kSize = 20;
struct CandyBar {
    char name[kSize];
    double weight;
    int calories;
};

void fill(CandyBar &candy, const char *str = "Millennium Munch", double weight = 2.85, int calories = 350) {
    strcpy(candy.name, str);
    candy.weight = weight;
    candy.calories = calories;
}

void display(const CandyBar &candy) {
    cout << "Name: " << candy.name << endl
         << "Weight: " << candy.weight << endl
         << "Calories: " << candy.calories << endl;
}

int main() {
    CandyBar candy;
    fill(candy);
    display(candy);
    fill(candy, "Kinder", 3.5, 400);
    display(candy);
    return 0;
}