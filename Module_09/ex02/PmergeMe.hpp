#include <array>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <string>
#include <deque>
#include <iterator>
#include <list>
#include <ctime>
#include <sys/time.h>

class PmergeMe
{
    private:
        std::list<int> lis_first;
        std::deque<int> deque_first;



    public:
        PmergeMe();
        ~PmergeMe();
        void print_list();
        void error();
        void load(char **args);

    private:
            bool validate_number(std::string value);
            long double get_time();
            bool contains_item(int number);
};
