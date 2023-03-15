//
// Created by edos-san on 3/15/23.
//

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){

   // this->lis_first.sort();

   // std::sort(this->deque_first.begin(), this->deque_first.end());
}

PmergeMe::~PmergeMe(){

}

void PmergeMe::error(){
    std::cout << "Error\n";
    exit(0);
}

bool PmergeMe::validate_number(std::string value) {
    int pont = 0;
    int i;

    if (value.empty())
        return false;
    for (i = 0; i < value.size() - 1; i++) {
        if (i == 0 && !std::isdigit((int) value[i]) && value[i] != '-' && value[i] != '+') {
            return false;
        } else if (i > 0 && !std::isdigit((int) value[i])) {
                return false;
        }
    }
    return (std::isdigit((int) value[i]));
}

void PmergeMe::load(char **args)
{
    std::string n;

    while (args && *args)
    {
        n = *args;
        if (!validate_number(n))
            error();
        long long number = std::strtol(n.c_str(), 0, 10);
        if (number < -2147483648 || number > 2147483647)
            error();
        this->lis_first.push_back(number);
        this->deque_first.push_back(number);
        args++;
    }

}

long long PmergeMe::get_time(){
    const long long sysTime = time(0);
    const long long sysTimeMS = sysTime*1000;

    return sysTimeMS;
}

void PmergeMe::print_list(){

    long long list_time;
    long long deque_time;

    std::list<int>::iterator ptr;
    std::cout << "Before:";
    for(ptr = list.begin(); ptr != list.end(); ++ptr)
        std::cout << " " <<  *ptr << "";
    std::cout << "\n";
    list_time =  get_time();
    this->lis_first.sort();
    list_time = get_time() - list_time;
    std::cout << "Before:";
    for(ptr = list.begin(); ptr != list.end(); ++ptr)
        std::cout << " " <<  *ptr << "";
    std::cout << "\n";
}
