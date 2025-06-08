#include <iostream>
using namespace std;

int input(float scores[], int n);
float average(const float scores[], int size);
void display(const float scores[], int size);

int main() {
    const int n = 10;
    float scores[n];
    int size = input(scores, n);
    float avg = average(scores, size);
    display(scores, size);
    cout << "Average score: " << avg << endl;
    return 0;
}

int input(float scores[], int n) {
    cout << "Enter up to 10 scores (-1 to exit): ";
    float score;
    for (int i = 0; i < n; i++) {
        cin >> score;
        if (score == -1) return i;
        scores[i] = score;
    }
    return n;
}

float average(const float scores[], int size) {
    // avoid divided by 0
    if (size == 0) return 0.0;
    
    float sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return sum / size;
}

void display(const float scores[], int size) {
    cout << "Score: ";
    for (int i = 0; i < size; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;
}