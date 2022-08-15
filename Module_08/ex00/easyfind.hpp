#include <array>
#include <algorithm>
#include <stdexcept>

template <class T>
typename T::iterator	easyfind(T &value, int i)
{
	typename T::iterator v = std::find(value.begin(), value.end(), i);
	if (v == value.end())
	{
		throw std::invalid_argument("Value not found");
	}
	return v;
}