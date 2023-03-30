#include "Fixed.hpp"
#include <cmath>

int	Fixed::getFractionalBits(void) const
{
	return (fractional_bits);
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)value / (float)(1 << fractional_bits));
}

int		Fixed::toInt(void) const
{
	return (value >> fractional_bits);
}

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
	value = nbr << fractional_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nbr)
{
	value = nbr * ((1 << fractional_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &rhs)
{
	this->value = rhs.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = rhs.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream &stream, Fixed const &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
