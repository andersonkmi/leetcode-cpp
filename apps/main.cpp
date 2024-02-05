#include <ReverseVowels.hpp>
#include <string>
#include <iostream>

using namespace std;

int main() {
    ReverseVowels rv;
    string input("leetcode");
    string result = rv.reverseVowels(input);
    cout << result << endl;
    return 0;
}
