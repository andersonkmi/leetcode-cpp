#include <MultiplyStrings.hpp>
#include <algorithm>
#include <math.h>
#include <string>

MultiplyStrings::MultiplyStrings() 
{
    // empty constructor
}

std::string MultiplyStrings::multiply(const std::string& number1, const std::string& number2)
{
    unsigned long long value1 = convert(number1);
    unsigned long long value2 = convert(number2);

    unsigned long long total = value1 * value2;

    return std::to_string(total);
}

unsigned long long MultiplyStrings::convert(const std::string& number)
{
    unsigned long long total = 0;
    std::string numberCopy(number);
    std::reverse(numberCopy.begin(), numberCopy.end());

    for (std::string::size_type index = 0; index < numberCopy.size(); index++)
    {
        unsigned long long element = ((unsigned long long) numberCopy[index]) - 48;
        total += element * pow(10, index);
    }

    return total;
}