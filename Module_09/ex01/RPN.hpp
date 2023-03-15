#include <array>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <stdexcept>
#include <fstream>
#include <iostream>
#include <vector>

class RPN
{
	private:
		std::vector<char> data;
        bool               is_result;
        long                result;

	public:
        RPN();
		~RPN();
		void load(std::string arg);
        void print_list();
        int calculate();

    private:
        bool is_operations(char c);
        int  cal();
        void error();



};

