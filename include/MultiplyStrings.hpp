#ifndef MULTIPLY_STRINGS_HPP__
#define MULTIPLY_STRINGS_HPP__

#include <string>

using namespace std;

class MultiplyStrings
{
public:
    MultiplyStrings();
    MultiplyStrings(const MultiplyStrings&) = delete;
    MultiplyStrings& operator=(const MultiplyStrings&) = delete;

    std::string multiply(const std::string& number1, const std::string& number2);

private:
    unsigned long long convert(const std::string&);
};

#endif