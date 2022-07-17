#include "Fixed.hpp"

Fixed::Fixed()
{
	raw_bits = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed)
{
	raw_bits = fixed.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->raw_bits  = fixed.raw_bits;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (raw_bits);
}

void Fixed::setRawBits(int const raw)
{
	this->raw_bits = raw;
}
