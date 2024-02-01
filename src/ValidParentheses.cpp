#include <algorithm>
#include <stack>
#include <ValidParentheses.hpp>


ValidParentheses::ValidParentheses() : opening_symbols_(), closing_symbols_(), expected_symbol_() 
{
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

ValidParentheses::~ValidParentheses()
{
    opening_symbols_.clear();
    closing_symbols_.clear();
    expected_symbol_.clear();
}

bool ValidParentheses::is_valid(const std::string& input) const 
{
    return const_cast<ValidParentheses*>(this)->is_valid(input);
}

bool ValidParentheses::is_valid(const std::string& input) {
    if (!is_even_length(input)) {
        return false;
    }

    std::vector<char> chars(input.c_str(), input.c_str() + input.size());
    if (!has_valid_chars(chars)) {
        return false;
    }

    std::stack<char> tokens;
    for (char index : chars)
    {
        if (is_opening_symbol(index))
        {
            tokens.push(index);
        } 
        else 
        {
            char expected_opening_char = expected_symbol_[index];
            if (tokens.empty()) {
                return false;
            }

            char current_top_char = tokens.top();
            tokens.pop();

            if (current_top_char != expected_opening_char) {
                return false;
            }
        }
    }

    if (tokens.empty())
    {
        return true;
    }
    return false;
}

bool ValidParentheses::is_even_length(const std::string& input) 
{
    return input.size() % 2 == 0;
}

bool ValidParentheses::has_valid_chars(const std::vector<char>& chars) 
{
    for (char index : chars)
    {
        auto open_iterator = std::find(opening_symbols_.cbegin(), opening_symbols_.cend(), index);
        auto close_iterator = std::find(closing_symbols_.cbegin(), closing_symbols_.cend(), index);
        if (open_iterator == opening_symbols_.cend() && close_iterator == closing_symbols_.cend()) 
        {
            return false;
        }
    }

    return true;
}

bool ValidParentheses::is_opening_symbol(const char item) 
{
    auto index = std::find(opening_symbols_.cbegin(), opening_symbols_.cend(), item);
    if (index != opening_symbols_.cend()) 
    {
        return true;
    }
    return false;
}
