#include "Fixed.hpp"
#include <cmath>

int	Fixed::getFractionalBits(void) const
{
	return (fractional_bits);
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
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

Fixed	&Fixed::min(Fixed &ref1, Fixed &ref2)
{
	return (ref1.toFloat() < ref2.toFloat() ? ref1 : ref2);
}

const Fixed	&Fixed::min(const Fixed &ref1, const Fixed &ref2)
{
	return (ref1.toFloat() < ref2.toFloat() ? ref1 : ref2);
}

Fixed	&Fixed::max(Fixed &ref1, Fixed &ref2)
{
	return (ref1.toFloat() > ref2.toFloat() ? ref1 : ref2);
}

const Fixed	&Fixed::max(const Fixed &ref1, const Fixed &ref2)
{
	return (ref1.toFloat() > ref2.toFloat() ? ref1 : ref2);
}

// comparison operators
Fixed &Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &rhs)
{
	return (value > rhs.value);
}

bool	Fixed::operator<(const Fixed &rhs)
{
	return (value < rhs.value);
}

bool	Fixed::operator>=(const Fixed &rhs)
{
	return (value >= rhs.value);
}

bool	Fixed::operator<=(const Fixed &rhs)
{
	return (value <= rhs.value);
}

bool	Fixed::operator==(const Fixed &rhs)
{
	return (value == rhs.value);
}

bool	Fixed::operator!=(const Fixed &rhs)
{
	return (value != rhs.value);
}

/**
 * You can't just add one to the other, because one 
 * fixed point class could have a different size of fractional bits
 * than the other.
 */
Fixed	Fixed::operator+(const Fixed &rhs)
{
	return (Fixed(toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &rhs)
{
	return (Fixed(toFloat() - rhs.toFloat()));
}


Fixed	Fixed::operator*(const Fixed &rhs)
{
	return (Fixed(toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &rhs)
{
	return (Fixed(toFloat() / rhs.toFloat()));
}

Fixed &	Fixed::operator++(void)
{
	value++;
	return (*this);
}

Fixed &	Fixed::operator--(void)
{
	value--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;

	value++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;

	value--;
	return (tmp);
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

std::ostream&	operator<<(std::ostream &stream, Fixed const &fixed)
{
	std::cout << fixed.toFloat();
	return (stream);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
