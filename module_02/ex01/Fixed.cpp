#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
}

int		Fixed::toInt(void) const
{
}

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
	value = nbr << fractional_bits;
}

Fixed::Fixed(const float nbr)
{
	// float	tmp;
	// value = nbr * (2^(fractional_bits));
	value = nbr * (1 << fractional_bits);
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

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
