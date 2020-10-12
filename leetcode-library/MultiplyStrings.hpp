#ifndef MULTIPLY_STRINGS_HPP__
#define MULTIPLY_STRINGS_HPP__

#ifdef LEETCODELIBRARY_EXPORTS
#define LEETCODE_LIBRARY_API __declspec(dllexport)
#else
#define LEETCODE_LIBRARY_API __declspec(dllimport)
#endif

#include <string>

using namespace std;

class LEETCODE_LIBRARY_API MultiplyStrings
{
public:
    MultiplyStrings();
    MultiplyStrings(const MultiplyStrings&) = delete;
    MultiplyStrings& operator=(const MultiplyStrings&) = delete;

    std::string multiply(const std::string& number1, const std::string& number2);

private:
    unsigned long convert(const std::string&);
};

#endif