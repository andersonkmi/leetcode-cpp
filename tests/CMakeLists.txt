# Testing library
find_package(Catch2 3 REQUIRED)

# Tests need to be added as executables first
add_executable(LeetCodeCppTestLib
        ValidParenthesesTest.cpp
        ReverseVowelsTest.cpp)

# I'm using C++17 in the test
target_compile_features(LeetCodeCppTestLib PRIVATE cxx_std_17)

# Should be linked to the main library, as well as the Catch2 testing library
target_link_libraries(LeetCodeCppTestLib PRIVATE leetcodecpp_library Catch2::Catch2WithMain)

# If you register a test, then ctest and make test will run it.
# You can also run examples and check the output, as well.
add_test(NAME LeetCodeCppTestLib COMMAND LeetCodeCppTestLib) # Command can be a target

include(Catch)
catch_discover_tests(LeetCodeCppTestLib)