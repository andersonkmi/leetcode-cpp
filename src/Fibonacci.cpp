#include "Fibonacci.hpp"

Fibonacci::Fibonacci(bool use_memoization) : use_memoization_(use_memoization), calculated_values_()
{
    // empty constructor
}

int Fibonacci::calculate(int number)
{
    // start here
    return processFibonacci(number);
}

int Fibonacci::processFibonacci(int number)
{
    if (number <= 0)
    {
        return 0;
    }
    else if (number == 1) {
        return 1;
    }
    else
    {
        if (use_memoization_ == true)
        {
            if (calculated_values_.find(number) == calculated_values_.end())
            {
                calculated_values_[number] = processFibonacci(number - 1) + processFibonacci(number - 2);
            }
            return calculated_values_[number];
        }
        else
        {
            return processFibonacci(number - 1) + processFibonacci(number - 2);
        }
    }
}