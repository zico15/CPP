#include <iostream>
#include "PmergeMe.hpp"


int main(int argc, char **args)
{
    PmergeMe p;

    if (args[1] == NULL)
        p.error();
    p.load(++args);
    p.print_list();

    return 0;
}