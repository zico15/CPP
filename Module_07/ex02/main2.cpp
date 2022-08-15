#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10
int main2(int, char**)
{
    Array<int> numbers(MAX_VAL);
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
    }

    for (int i = 0; i < numbers.size(); i++)
    {
       std::cout << "I: " << i << " " << numbers[i] << "\n";
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    return 0;
}