#ifndef REVERSEVOWELS_HPP__
#define REVERSEVOWELS_HPP__

#include <string>

class ReverseVowels {
public:
    ReverseVowels();
    virtual ~ReverseVowels();
    std::string reverseVowels(const std::string&);

private:
    ReverseVowels(const ReverseVowels&);
    ReverseVowels& operator=(const ReverseVowels&);
};


#endif //LEETCODECPP_REVERSEVOWELS_HPP
