#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T [], int );

template <>
const char* maxn(const char* [], int);

int main() {
    int ints[6] = {1, 3, 2, 5, -1, -3};
    cout << "Max in ints: " << maxn(ints, 6) << endl;

    double doubles[4] = {-2.5, 1.4, 3.3, 7.9};
    cout << "Max in doubles: " << maxn(doubles, 4) << endl;

    const char* strs[5] = {"Now", "Say", "My", "Name", "Hamburger"};
    cout << "Max in strings: " << maxn(strs, 5) << endl;
    return 0;
}

template<typename T>
T maxn(T nums[], int n) {
    T maxNum = nums[0];
    for (int i = 0; i < n; i++) {
        if (nums[i] > maxNum) {
            maxNum = nums[i];
        }
    }
    return maxNum;
}

template<>
const char* maxn(const char* strs[], int n) {
    const char* maxStr = strs[0];
    int maxLen = strlen(strs[0]);
    for (int i = 0; i < n; i++) {
        if (strlen(strs[i]) > maxLen) {
            maxStr = strs[i];
            maxLen = strlen(strs[i]);
        }
    }
    return maxStr;
} 