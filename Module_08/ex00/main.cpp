#include <iostream>
#include "easyfind.hpp"
#include <list>

int main(int, char**)
{
    
    int myints[] = {16,2,77,29};
    std::list<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );
    std::cout << "=====================================================\n";
    std::cout << "The contents of fifth are: ";
    for (std::list<int>::iterator it = fifth.begin(); it != fifth.end(); it++)
      std::cout << *it << ' ';
    try
    {
        std::cout << "\n=====================================================\n";
        std::cout << *easyfind(fifth, 2) << std::endl;
        std::cout << "\n=====================================================\n";
        std::cout << *easyfind(fifth, 16) << std::endl;
        std::cout << "\n=====================================================\n";
        std::cout << *easyfind(fifth, 30) << std::endl;
        std::cout << '\n';
    }
    catch(const std::exception& e)
    {
         std::cout << "ERROR: " << e.what() << '\n';
    }
    
   
    return 0;
}