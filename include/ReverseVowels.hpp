#ifndef REVERSEVOWELS_HPP__
#define REVERSEVOWELS_HPP__

#include <string>
#include <stack>

class ReverseVowels {
public:
    ReverseVowels();
    virtual ~ReverseVowels();
    // Disable copy constructor and operator assignment
    ReverseVowels(const ReverseVowels&)= delete;
    ReverseVowels& operator=(const ReverseVowels&) = delete;

    std::string reverseVowels(const std::string&);

private:
    std::stack<char> extracted_vowels_;

    void extractVowelsInformation(const std::string&);
    bool isVowel(const char);
    void replaceVowels(std::string&);
};


#endif //LEETCODECPP_REVERSEVOWELS_HPP
