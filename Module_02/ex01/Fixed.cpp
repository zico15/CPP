#include "Fixed.hpp"

Fixed::Fixed()
{
	raw_bits = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const raw_bits)
{
	std::cout << "Int constructor called" << std::endl;
	this->raw_bits = (raw_bits << Fixed::bits);
}

Fixed::Fixed(float const raw_bits)
{
	std::cout << "Float constructor called" << std::endl;
	this->raw_bits = roundf(raw_bits * (1 << Fixed::bits));
}

Fixed::Fixed(Fixed const &fixed)
{
	raw_bits = fixed.raw_bits;
	std::cout << "Copy constructor called" << std::endl;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->raw_bits  = fixed.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& dt)
{
    os << dt.toFloat();
    return os;
}

int Fixed::getRawBits(void) const
{
	return (raw_bits);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->raw_bits = raw;
}

float Fixed::toFloat(void) const
{
	return ((float) getRawBits() / (float)(1 << Fixed::bits));
}
 
int Fixed::toInt(void) const
{
	return (this->getRawBits() >> Fixed::bits);

}
