#ifndef LEETCODECPP_REVERSEWORDS_H
#define LEETCODECPP_REVERSEWORDS_H

#include <string>

using namespace std;

class ReverseWords {
public:
    ReverseWords();
    virtual ~ReverseWords();
    ReverseWords(const ReverseWords&) = delete;
    ReverseWords& operator=(const ReverseWords&) = delete;

    string reverseWords(const string& value);
};

#endif //LEETCODECPP_REVERSEWORDS_H
