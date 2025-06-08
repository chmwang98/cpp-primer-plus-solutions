#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter words (q to quit):" << endl;
    string word;
    int vowel = 0, consonant = 0, others = 0;

    while (cin >> word && word != "q") {
        char ch = word[0];
        if (isalpha(ch)) {
            ch = tolower(ch);
            switch (ch) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    vowel++;
                    break;
                default:
                    consonant++;
                    break;
            }
        } else {
            others++;
        }
    }

    cout << vowel << " words beginning with vowels" << endl;
    cout << consonant << " words beginning with consonants" << endl;
    cout << others << " others" << endl;
    return 0;
}