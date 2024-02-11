#include <ReverseWords.h>

ReverseWords::ReverseWords() {
    // nothing so far
}

ReverseWords::~ReverseWords() {
    // empty destructor
}

string ReverseWords::reverseWords(const string& value) {
    // First step: tokenize original string
    return {""};
}

stack<string> ReverseWords::tokenizeString(const std::string& value) {
    stack<string> tokens;
    unsigned long startPosition = 0;
    unsigned long endPosition = 0;

    startPosition = value.find_first_not_of(' ');
    while(startPosition < value.length()) {
        endPosition = value.find_first_of(' ', startPosition + 1);
        // Extract the string
        string token = value.substr(startPosition, endPosition - startPosition + 1);
        tokens.push(token);

        // Reposition start position
        startPosition = value.find_first_not_of(' ', endPosition);
    }

    return tokens;
}