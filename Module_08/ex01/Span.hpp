#include <array>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <string>

class Span
{
	private:
		int max;
		int size = 0;
		std::vector<int> value;
		int difference(int a, int b);
	public:
		Span();
		Span(unsigned int n);
		~Span();
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();


};

