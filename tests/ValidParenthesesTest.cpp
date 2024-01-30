#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <ValidParentheses.hpp>

TEST_CASE( "Quick check", "[main]" ) {
    ValidParentheses validParentheses;
    bool isValid = validParentheses.is_valid("()");
    REQUIRE(isValid == true);
}

