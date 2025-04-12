
#include <ReverseVowels.hpp>

ReverseVowels::ReverseVowels() {
    // Empty constructor
}

ReverseVowels::~ReverseVowels() {
    // Empty destructor
}

std::string ReverseVowels::reverseVowels(const std::string& input) {
    extractVowelsInformation(input);
    std::string result(input);
    replaceVowels(result);
    return result;
}

void ReverseVowels::extractVowelsInformation(const std::string& input) {
    for (const auto& ch : input) {
        if(isVowel(ch)) {
            extracted_vowels_.push(ch);
        }
    }
}

bool ReverseVowels::isVowel(char item) {
    return (item == 'a' || item == 'A'
    || item == 'e' || item == 'E' 
    || item == 'i' || item == 'I'
    || item == 'o' || item == 'O'
    || item == 'u' || item == 'U');
}

void ReverseVowels::replaceVowels(std::string& result) {
    int position = 0;
    for (const auto& ch : result) {
        if(isVowel(ch)) {
            result[position] = extracted_vowels_.top();
            extracted_vowels_.pop();
        }
        position++;
    }    
}
