#ifndef VALID_PARENTHESES_HPP__
#define VALID_PARENTHESES_HPP__


#include <string>
#include <vector>
#include <map>

using namespace std;


class ValidParentheses
{
public:
    ValidParentheses();
    ValidParentheses(const ValidParentheses&) = delete;
    ValidParentheses& operator= (const ValidParentheses&) = delete;
    bool is_valid(const std::string& input);
    [[nodiscard]] bool is_valid(const std::string& input) const;

    virtual ~ValidParentheses();
    
private:
    static bool is_even_length(const std::string&);
    bool has_valid_chars(const std::vector<char>&);
    bool is_opening_symbol(const char);

    std::vector<char> opening_symbols_;
    std::vector<char> closing_symbols_;
    std::map<char, char> expected_symbol_;
};

#endif