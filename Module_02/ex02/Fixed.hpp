#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{

	private:
		static const int bits = 8;
		int	raw_bits;
	public:
		Fixed();
		Fixed(float const raw_bits);
		Fixed(int const raw_bits);
		Fixed(Fixed const &fixed);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &operator=(Fixed const &Fixed);
		Fixed operator*(Fixed const &Fixed);
		Fixed &operator++(int);
		Fixed &operator++();
		int toInt(void) const;
		float toFloat(void) const;
		static Fixed const &max(Fixed const &a, Fixed const &b);

};

std::ostream &operator<<(std::ostream &out, Fixed const &value);


#endif
