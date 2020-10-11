#ifndef VALID_PARENTHESES_TESTER_HPP__
#define VALID_PARENTHESES_TESTER_HPP__

#include "ValidParentheses.hpp"

class ValidParenthesesTester
{
public:
    ValidParenthesesTester();
    ValidParenthesesTester(const ValidParenthesesTester&) = delete;
    ValidParenthesesTester& operator=(const ValidParenthesesTester&) = delete;

    void perform_tests(const ValidParentheses&);
};

#endif