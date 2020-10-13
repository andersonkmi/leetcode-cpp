// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ValidParenthesesTester.hpp"
#include <ValidParentheses.hpp>
#include <MultiplyStrings.hpp>
#include <memory>

int main()
{
    ValidParentheses service;
    ValidParenthesesTester service_tester;
    service_tester.perform_tests(service);

    std::shared_ptr<MultiplyStrings> msp = std::make_shared<MultiplyStrings>();
    std::cout << msp->multiply("123", "456") << std::endl;
}