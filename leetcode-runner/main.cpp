// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ValidParenthesesTester.hpp"
#include <ValidParentheses.hpp>
#include <MultiplyStrings.hpp>
#include <Fibonacci.hpp>
#include <memory>
#include <WordLadder.hpp>

int main()
{
    ValidParentheses service;
    ValidParenthesesTester service_tester;
    service_tester.perform_tests(service);

    std::shared_ptr<MultiplyStrings> msp = std::make_shared<MultiplyStrings>();
    std::cout << msp->multiply("123", "456") << std::endl;

    std::shared_ptr<Fibonacci> fibonacci = std::make_shared<Fibonacci>();
    std::cout << "fib(3): " << fibonacci->calculate(3) << std::endl;
    std::cout << "fib(5): " << fibonacci->calculate(5) << std::endl;
    std::cout << "fib(41): " << fibonacci->calculate(41) << std::endl;
    std::cout << "fib(42): " << fibonacci->calculate(42) << std::endl;

    std::shared_ptr<Fibonacci> fiboMemo = std::make_shared<Fibonacci>(true);
    std::cout << "fib(41): " << fiboMemo->calculate(41) << std::endl;
    std::cout << "fib(42): " << fiboMemo->calculate(42) << std::endl;

    std::string beginWord("hit");
    std::string endWord("cog");
    std::vector<std::string> wordList;
    wordList.push_back("hot");
    wordList.push_back("dot");
    wordList.push_back("dog");
    wordList.push_back("lot");
    wordList.push_back("log");
    wordList.push_back("cog");
    WordLadder wl;
    wl.ladderLength(beginWord, endWord, wordList);
}