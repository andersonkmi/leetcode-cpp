#include <ReverseVowels.hpp>
#include <string>
#include <iostream>

using namespace std;

int main() {
    ReverseVowels* rv = new ReverseVowels;
    string input("leetcode");
    string result = rv->reverseVowels(input);
    cout << result << endl;
    delete(rv);
    return 0;
}
