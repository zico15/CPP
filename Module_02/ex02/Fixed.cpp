#include "Fixed.hpp"

Fixed::Fixed()
{
	raw_bits = 0;
}

Fixed::Fixed(int const raw_bits)
{
	this->raw_bits = (raw_bits << Fixed::bits);
}

Fixed::Fixed(float const raw_bits)
{
	this->raw_bits = roundf(raw_bits * (1 << Fixed::bits));
}

Fixed::Fixed(Fixed const &fixed)
{
	raw_bits = fixed.raw_bits;
}


Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(Fixed const &fixed)
{
	this->raw_bits  = fixed.getRawBits();
	return (*this);
}

Fixed Fixed::operator*(Fixed const &f)
{
	Fixed val(*this);

	val.setRawBits(((long)this->getRawBits() * (long)f.getRawBits()) / (1 << Fixed::bits));
	return (val);
}

Fixed &Fixed::operator++(int)
{
	this->raw_bits++;
	return (*this);
}

Fixed &Fixed::operator++()
{
	this->raw_bits++;
	return (*this);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);	
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
	this->raw_bits = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->raw_bits / (float)(1 << Fixed::bits));
}

int Fixed::toInt(void) const
{
	return (this->raw_bits >> Fixed::bits);
}
