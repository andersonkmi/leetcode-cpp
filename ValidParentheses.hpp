#pragma once
#include <string>
#include <vector>
#include <map>
#include <stack>

using namespace std;

class ValidParentheses {
public:
    ValidParentheses();
    ValidParentheses(const ValidParentheses&) = delete;
    ValidParentheses& operator= (const ValidParentheses&) = delete;
    bool is_valid(const std::string& input);
    
private:
    bool is_even_length(const std::string&);
    bool has_valid_chars(const std::vector<char>&);

    std::vector<char> opening_symbols_;
    std::vector<char> closing_symbols_;
    std::map<char, char> expected_symbol_;

    std::stack<char> tokens_;
};

