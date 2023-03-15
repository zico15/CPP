//
// Created by edos-san on 3/15/23.
//
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{

}

bool BitcoinExchange::validate_number(std::string value) {
    int pont = 0;
    int i;

    if (value.empty())
        return false;
    for (i = 0; i < value.size() - 1; i++) {
        if (i == 0 && !std::isdigit((int) value[i]) && value[i] != '-' && value[i] != '+') {
            return false;
        } else if (i > 0 && !std::isdigit((int) value[i])) {
            pont += value[i] == '.';
            if (pont > 1 || value[i] != '.')
                return false;
        }
    }
    return (std::isdigit((int) value[i]) || value[i] == 'f');
}

bool BitcoinExchange::validate_data(std::string value, char separator_data)
{
    int i = 0;

    if (value.size() != 10)
        return  (false);
    for (i = 0; i < value.size(); i++) {
        if ((i == 4 || i == 7) && value[i] != separator_data)
            return (false);
        else if (!(i == 4 || i == 7) && !std::isdigit((int) value[i]))
            return (false);
    }
    return  (true);
}


bool BitcoinExchange::validate_field(std::string line, char separator, char separator_data, bool insert, int index)
{

    std::string value_1 = "";
    std::string value_2 = "";
    bool is_separator = false;
    float  number;

    for (int i = 0; i < line.size(); i++) {
        if (line[i] == separator || std::isspace((int) line[i])) {
            if (line[i] == separator)
                is_separator = true;
            continue;
        }
        if (is_separator)
            value_2 += line[i];
        else
            value_1 += line[i];
    }
    number = std::strtof(value_2.c_str(), 0);
    if (insert)
        this->data[value_1] = value_2;
    else
    {
        if (index == 0)
        {

            if (value_1.compare(std::string("date").c_str()) || value_2.compare(std::string("value").c_str())) {
                std::cout << "Error: head invalid!\n";
                return (false);
            }

        }else if (!validate_data(value_1, separator_data) || value_2.empty() || this->data[value_1].empty())
           std:: cout << "Error: bad input => " + value_1 << "\n";
        else if (!validate_number(value_2) || number < 0)
            std:: cout << "Error: not a positive number.\n";
        else if (number > 100)
            std::cout << "Error: too large a number.\n";
        else
            std::cout << value_1 << " => " << number <<" = " << number * std::strtof(data[value_1].c_str(), 0) << "\n";
    }
    return (true);
}

void BitcoinExchange::load_data(std::string path)
{
        std::string line;
        std::ifstream file (path);
        int i = 0;

        if (!file.is_open())
            throw ("File Input: " + path + " Not Open");
        else
        {
            while (getline (file,line) )
            {
                validate_field(line, ',', '-', true, i++);
            }
            file.close();
        }
}

void BitcoinExchange::load_input(std::string path)
{
    std::string line;
    std::ifstream file (path);
    int i = 0;

    if (!file.is_open())
        throw ("File: " + path + " Not Open");
    else
    {
        while (getline (file,line) )
            if (!validate_field(line, '|', '-', false, i++))
                break;
        file.close();
    }
}