#include <iostream>
#include "RPN.hpp"
#include <list>

int main(int argc, char **args)
{
    RPN rpn;

    if (argc > 2 || args[1] == NULL) {
        std::cout << "Error\n";
        return 0;
    }
    rpn.load(args[1]);
    std::cout << rpn.calculate() << "\n";
    return 0;
}