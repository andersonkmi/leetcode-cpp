#pragma once
#include <string>

using namespace std;

class ValidParentheses {
public:
    ValidParentheses();
    ValidParentheses(const ValidParentheses&) = delete;
    ValidParentheses& operator= (const ValidParentheses&) = delete;
    bool is_valid(const std::string& input);
    
private:
    bool is_even_length(const std::string&);
};

