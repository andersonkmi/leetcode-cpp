//#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <ValidParentheses.hpp>

TEST_CASE("Valid parentheses simple case") {
    ValidParentheses validParentheses;
    bool isValid = validParentheses.is_valid("()");
    CHECK(isValid == true);
}

TEST_CASE("Valid parentheses invalid simple case") {
    ValidParentheses validParentheses;
    bool isValid = validParentheses.is_valid("(");
    CHECK(isValid == false);
}

TEST_CASE("Validating {}()") {
    ValidParentheses validParentheses;
    bool isValid = validParentheses.is_valid("{}()");
    CHECK(isValid == true);
}

TEST_CASE("When validating {(}) should return false") {
    ValidParentheses validParentheses;
    bool isValid = validParentheses.is_valid("{({)");
    CHECK(isValid == false);
}

TEST_CASE("When validating {[()]} should return true") {
    ValidParentheses validParentheses;
    bool isValid = validParentheses.is_valid("{[()]}");
    CHECK(isValid == true);
}