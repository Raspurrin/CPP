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
	// double	tmp;
	// tmp = nbr * (2^(fractional_bits));
	// value = round(tmp);
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
	float	decimal = 0;
	size_t	shift = fixed.getFractionalBits();

	std::cout << (fixed.getRawBits() >> fixed.getFractionalBits());
	if (fixed.getRawBits() << (32 - fixed.getFractionalBits()) != 0)
	{
		for (size_t i = 0; i < fixed.getFractionalBits(); i++)
		{
			if (((fixed.getRawBits() >> shift) & 1) == 1)
				decimal += ((1.f / (1 << i)));
			shift--;
		}
		std::cout << "." << (int64_t)(decimal * pow(10, fixed.getFractionalBits()));
	}
	return (stream);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
