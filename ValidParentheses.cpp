#include "ValidParentheses.hpp"
#include <algorithm>

ValidParentheses::ValidParentheses() : opening_symbols_(), closing_symbols_(), expected_symbol_(), tokens_() {
    opening_symbols_.push_back('(');
    opening_symbols_.push_back('[');
    opening_symbols_.push_back('{');

    closing_symbols_.push_back(')');
    closing_symbols_.push_back(']');
    closing_symbols_.push_back('}');

    expected_symbol_.insert(std::make_pair(')', '('));
    expected_symbol_.insert(std::make_pair(']', '['));
    expected_symbol_.insert(std::make_pair('}', '{'));
}

bool ValidParentheses::is_valid(const std::string& input) {
    if (is_even_length(input) == false) {
        return false;
    }

    std::vector<char> chars(input.c_str(), input.c_str() + input.size());
    if (has_valid_chars(chars) == false) {
        return false;
    }

    return true;
}

bool ValidParentheses::is_even_length(const std::string& input) {
    return input.size() % 2 == 0;
}

bool ValidParentheses::has_valid_chars(const std::vector<char>& chars) {
    for (std::vector<char>::const_iterator index = chars.begin(); index != chars.end(); index++) {
        std::vector<char>::const_iterator open_iterator = std::find(opening_symbols_.begin(), opening_symbols_.end(), *index);
        std::vector<char>::const_iterator close_iterator = std::find(closing_symbols_.begin(), closing_symbols_.end(), *index);
        if (open_iterator == opening_symbols_.end() && close_iterator == closing_symbols_.end()) {
            return false;
        }
    }

    return true;
}
