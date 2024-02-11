#ifndef LEETCODECPP_REVERSEWORDS_H
#define LEETCODECPP_REVERSEWORDS_H

#include <string>
#include <stack>

using namespace std;

class ReverseWords {
public:
    ReverseWords() = default;
    virtual ~ReverseWords() = default;
    ReverseWords(const ReverseWords&) = delete;
    ReverseWords& operator=(const ReverseWords&) = delete;

    string reverseWords(const string& value);

private:
    static stack<string> tokenizeString(const string& value);
};

#endif //LEETCODECPP_REVERSEWORDS_H
