#ifndef FIBONACCI_HPP__
#define FIBONACCI_HPP__

#include <map>
using namespace std;

class Fibonacci
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
