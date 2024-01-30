#ifndef VALID_PARENTHESES_HPP__
#define VALID_PARENTHESES_HPP__

#ifdef LEETCODELIBRARY_EXPORTS
#define LEETCODE_LIBRARY_API __declspec(dllexport)
#else
#define LEETCODE_LIBRARY_API __declspec(dllimport)
#endif


#include <string>
#include <vector>
#include <map>

using namespace std;


class LEETCODE_LIBRARY_API ValidParentheses
{
public:
    ValidParentheses();
    ValidParentheses(const ValidParentheses&) = delete;
    ValidParentheses& operator= (const ValidParentheses&) = delete;
    bool is_valid(const std::string& input);
    bool is_valid(const std::string& input) const;

    virtual ~ValidParentheses();
    
private:
    bool is_even_length(const std::string&);
    bool has_valid_chars(const std::vector<char>&);
    bool is_opening_symbol(const char);

    std::vector<char> opening_symbols_;
    std::vector<char> closing_symbols_;
    std::map<char, char> expected_symbol_;
};

#endif