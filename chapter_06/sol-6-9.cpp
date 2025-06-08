#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct donor{
    string name;
    double money;
};

int main() {
    string filename = "test_6_9.txt";
    ifstream infile;
    infile.open(filename);
    if (!infile.is_open()) {
        cout << "Couldn't open file " << filename << endl;
        cout << "Program terminating" << endl;
        exit(EXIT_FAILURE);
    }

    int num, numGrand;
    numGrand = 0;
    (infile >> num).get();
    donor *patron = new donor[num];
    for (int i = 0; i < num; i++) {
        getline(infile, patron[i].name);
        (infile >> patron[i].money).get();
        if (patron[i].money >= 10000) numGrand++;
    }

    cout << "Grand Patrons:" << endl;
    if (numGrand == 0) {
        cout << "None." << endl;
    } else {
        for (int i = 0; i < num; i++) {
            if (patron[i].money >= 10000) {
                cout << patron[i].name << "\t" << patron[i].money << endl;
            }
        }
    }

    cout << "Other patrons: " << endl;
    if (numGrand == num) {
        cout << "None." << endl;
    } else {
        for (int i = 0; i < num; i++) {
            if (patron[i].money < 10000) {
                cout << patron[i].name << "\t" << patron[i].money << endl;
            }
        }
    }
    infile.close();
    delete[] patron;

    return 0;
}