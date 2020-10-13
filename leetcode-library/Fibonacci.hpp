#ifndef FIBONACCI_HPP__
#define FIBONACCI_HPP__

#ifdef LEETCODELIBRARY_EXPORTS
#define LEETCODE_LIBRARY_API __declspec(dllexport)
#else
#define LEETCODE_LIBRARY_API __declspec(dllimport)
#endif


class LEETCODE_LIBRARY_API Fibonacci
{
public:
    Fibonacci();
    Fibonacci(const Fibonacci&) = delete;
    Fibonacci& operator=(const Fibonacci&) = delete;

    int calculate(int number);

private:
    int processFibonacci(int number);
};

#endif
