#ifndef FIBONACCI_HPP__
#define FIBONACCI_HPP__

#ifdef LEETCODELIBRARY_EXPORTS
#define LEETCODE_LIBRARY_API __declspec(dllexport)
#else
#define LEETCODE_LIBRARY_API __declspec(dllimport)
#endif

#include <map>
using namespace std;

class LEETCODE_LIBRARY_API Fibonacci
{
public:
    Fibonacci(bool use_memoization = false);
    Fibonacci(const Fibonacci&) = delete;
    Fibonacci& operator=(const Fibonacci&) = delete;

    int calculate(int number);

private:
    int processFibonacci(int number);
    bool use_memoization_;
    std::map<int, int> calculated_values_;
};

#endif
