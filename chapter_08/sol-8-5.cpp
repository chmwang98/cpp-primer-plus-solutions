#include <iostream>
using namespace std;

template <typename T>
T max5(T nums[]);

int main() {
    int ints[5] = {1, 3, 2, 5, -1};
    int maxInt = max5(ints);
    double doubles[5] = {-2.5, 1.4, 3.3, 7.9, 11.2};
    double maxDouble = max5(doubles);
    cout << "Max in ints: " << maxInt << endl;
    cout << "Max in doubles: " << maxDouble << endl;
    return 0;
}

template<typename T>
T max5(T nums[]) {
    T maxNum = nums[0];
    for (int i = 0; i < 5; i++) {
        if (nums[i] > maxNum) {
            maxNum = nums[i];
        }
    }
    return maxNum;
}