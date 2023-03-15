#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char **args)
{
    BitcoinExchange b;

    try
    {
        if (args[1] == NULL)
            throw ("No arguments!");
        b.load_data("data.csv");
        b.load_input(args[1]);
    }
    catch (std::string msg){
        std::cout << "Error: " <<  msg << "\n";
    }
    return 0;
}