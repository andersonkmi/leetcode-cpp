#include <catch2/catch_test_macros.hpp>
#include <ReverseVowels.hpp>
#include <string>

TEST_CASE("When reversing hello should return holle", "[reverse_vowels]") {
    ReverseVowels reverseVowels;
    std::string result = reverseVowels.reverseVowels("hello");
    CHECK(result == "holle");
}