#include "ValidParenthesesTester.hpp"
#include <iostream>

using namespace std;

ValidParenthesesTester::ValidParenthesesTester() {
    // Empty constructor
}


void ValidParenthesesTester::perform_tests(const ValidParentheses& service)
{
    std::cout << "Validating empty string: " << service.is_valid("") << std::endl;
    std::cout << "Validating even numbered string: " << service.is_valid("(") << std::endl;
    std::cout << "Validating only opening symbols string: " << service.is_valid("([") << std::endl;
    std::cout << "Validating mixed symbols string: " << service.is_valid("(]{}") << std::endl;
    std::cout << "Validating test case ()[]{}: " << service.is_valid("()[]{}") << std::endl;
}