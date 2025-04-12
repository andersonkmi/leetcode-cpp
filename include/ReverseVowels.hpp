#ifndef REVERSEVOWELS_HPP_
#define REVERSEVOWELS_HPP_

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

    static bool isVowel(char);
    void replaceVowels(std::string&);
};


#endif //LEETCODECPP_REVERSEVOWELS_HPP
