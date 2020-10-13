#include "Fibonacci.hpp"

Fibonacci::Fibonacci()
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
        return processFibonacci(number - 1) + processFibonacci(number - 2);
    }
}