#include <array>
#include <algorithm>
#include <stdexcept>
#include <fstream>
#include <iostream>
#include <map>

class BitcoinExchange{

    private:
        std::map<std::string, std::string> data;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        void load_data(std::string path);
        void load_input(std::string path);
    private:
        bool validate_field(std::string line, char separator, char separator_data, bool insert, int index);
        bool validate_number(std::string value);
        bool validate_data(std::string value, char separator_data);


};