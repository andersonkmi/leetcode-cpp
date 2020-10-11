#include "ValidParentheses.hpp"

ValidParentheses::ValidParentheses() {
    // Empty ctor
}

bool ValidParentheses::is_valid(const std::string& input) {
    if (is_even_length(input)) {
        return false;
    }

    return true;
}

bool ValidParentheses::is_even_length(const std::string& input)
{
    return input.length() % 2 == 0;
}
