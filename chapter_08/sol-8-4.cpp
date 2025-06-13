#include <iostream>
using namespace std;
#include <cstring>
struct stringy {
    char *str;
    int ct;
};
void set(stringy &, const char *);
void show(const char *, int n = 1);
void show(const stringy &, int n = 1);

int main(void) {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    delete[] beany.str;
    return 0;
}

void set(stringy &s, const char *toCopy) {
    int len = strlen(toCopy);
    char *str = new char[len + 1];
    strcpy(str, toCopy);
    s.str = str;
    s.ct = len;
}

void show(const char *str, int n) {
    while (n--) {
        cout << str << endl;
    }
}

void show(const stringy &s, int n) {
    while (n--) {
        cout << s.str << endl;
    }
}