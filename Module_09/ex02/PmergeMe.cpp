//
// Created by edos-san on 3/15/23.
//

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){

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

#include <iostream>
#include <ctime>

int main() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    long long millisecondsSinceEpoch =
        (long long)(tv.tv_sec) * 1000 +
        (long long)(tv.tv_usec) / 1000;
    long long microsecondsSinceEpoch =
        (long long)(tv.tv_sec) * 1000000 +
        (long long)(tv.tv_usec);
    std::cout << "Time in microseconds since epoch: " << microsecondsSinceEpoch << std::endl;
    return 0;
}

long long PmergeMe::get_time(){
    const long long sysTime = timegm(0);
    const long long sysTimeMS = sysTime*1000;
    std::cout << "time: " << sysTime << "\n";
    unsigned long sysTime = std::ctime.tv_usec*(uint64_t)1000000+curTime.tv_usec;
    return sysTime;
}

void PmergeMe::print_list(){

    long long list_time;
    long long deque_time;

    std::list<int>::iterator ptr;
    std::cout << "Before:";
    for(ptr = lis_first.begin(); ptr != lis_first.end(); ++ptr)
        std::cout << " " <<  *ptr << "";
    std::cout << "\n";
    list_time =  get_time();
    this->lis_first.sort();
    list_time = get_time() - list_time;
    std::cout << "After: ";
    for(ptr = lis_first.begin(); ptr != lis_first.end(); ++ptr)
        std::cout << " " <<  *ptr << "";
    std::cout << "\n";
    deque_time =  get_time();
    std::sort(this->deque_first.begin(), this->deque_first.end());
    deque_time = get_time() - deque_time;
    std::cout << "Time to process a range of 5 elements with std::list : " <<  list_time << " us\n";
    std::cout << "Time to process a range of 5 elements with std::deque: " <<  deque_time << " us\n";

}
