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

Fixed	&Fixed::min(Fixed &ref1, Fixed &ref2)
{
	if ((ref1.getRawBits() >> ref1.getFractionalBits()) < (ref2.getRawBits() >> ref2.getFractionalBits()))
		return (ref1);
	else if ((ref1.getRawBits() >> ref1.getFractionalBits()) > (ref2.getRawBits() >> ref2.getFractionalBits()))
		return (ref2);
	if ((ref1.getRawBits() & (1 << ref1.getFractionalBits()) - 1) < (ref2.getRawBits() & (1 << ref2.getFractionalBits()) - 1))
		return (ref1);
	return (ref2);
}

const Fixed	&Fixed::min(const Fixed &ref1, const Fixed &ref2)
{
	if ((ref1.getRawBits() >> ref1.getFractionalBits()) < (ref2.getRawBits() >> ref2.getFractionalBits()))
		return (ref1);
	else if ((ref1.getRawBits() >> ref1.getFractionalBits()) > (ref2.getRawBits() >> ref2.getFractionalBits()))
		return (ref2);
	if ((ref1.getRawBits() & (1 << ref1.getFractionalBits()) - 1) < (ref2.getRawBits() & (1 << ref2.getFractionalBits()) - 1))
		return (ref1);
	return (ref2);
}

Fixed	&Fixed::max(Fixed &ref1, Fixed &ref2)
{
	if ((ref1.getRawBits() >> ref1.getFractionalBits()) > (ref2.getRawBits() >> ref2.getFractionalBits()))
		return (ref1);
	else if ((ref1.getRawBits() >> ref1.getFractionalBits()) < (ref2.getRawBits() >> ref2.getFractionalBits()))
		return (ref2);
	if ((ref1.getRawBits() & (1 << ref1.getFractionalBits()) - 1) > (ref2.getRawBits() & (1 << ref2.getFractionalBits()) - 1))
		return (ref1);
	return (ref2);
}

const Fixed	&Fixed::max(const Fixed &ref1, const Fixed &ref2)
{
	if ((ref1.getRawBits() >> ref1.getFractionalBits()) > (ref2.getRawBits() >> ref2.getFractionalBits()))
		return (ref1);
	else if ((ref1.getRawBits() >> ref1.getFractionalBits()) < (ref2.getRawBits() >> ref2.getFractionalBits()))
		return (ref2);
	if ((ref1.getRawBits() & (1 << ref1.getFractionalBits()) - 1) > (ref2.getRawBits() & (1 << ref2.getFractionalBits()) - 1))
		return (ref1);
	return (ref2);
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
	int32_t	whole;
	int32_t	remainder;

	whole = (value >> fractional_bits) + (rhs.value >> rhs.fractional_bits);
	remainder = (value & (1 << fractional_bits) - 1) + (rhs.value & (1 << rhs.fractional_bits));
	remainder = remainder & (1 << fractional_bits);
	return (*this);
}

Fixed	Fixed::operator-(const Fixed &rhs)
{
	int32_t	whole;
	int32_t	remainder;

	whole = (value >> fractional_bits) - (rhs.value >> rhs.fractional_bits);
	remainder = (value & (1 << fractional_bits) - 1) - (rhs.value & (1 << rhs.fractional_bits));
	remainder = remainder & (1 << fractional_bits);
	return (*this);
}

Fixed	Fixed::operator*(const Fixed &rhs)
{
	int32_t	whole;
	int32_t	remainder;

	whole = (value >> fractional_bits) * (rhs.value >> rhs.fractional_bits);
	remainder = (value & (1 << fractional_bits) - 1) * (rhs.value & (1 << rhs.fractional_bits));
	remainder = remainder & (1 << fractional_bits);
	return (*this);
}

Fixed	Fixed::operator/(const Fixed &rhs)
{
	int32_t	whole;
	int32_t	remainder;

	whole = (value >> fractional_bits) / (rhs.value >> rhs.fractional_bits);
	remainder = (value & (1 << fractional_bits) - 1) / (rhs.value & (1 << rhs.fractional_bits));
	remainder = remainder & (1 << fractional_bits);
	return (*this);
}

// increment/decrement
Fixed &	Fixed::operator++(void)
{
	value += (1 << fractional_bits);
	return (*this);
}

Fixed &	Fixed::operator--(void)
{
	value -= (1 << fractional_bits);
	return (*this);
}

Fixed &	Fixed::operator++(int)
{
	Fixed &tmp = *this;

	value += (1 << fractional_bits);
	return (tmp);
}

Fixed &	Fixed::operator--(int)
{
	Fixed &tmp = *this;

	value -= (1 << fractional_bits);
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
	float	decimal = 0;
	size_t	shift = fixed.getFractionalBits();

	stream << (fixed.getRawBits() >> fixed.getFractionalBits());
	if (fixed.getRawBits() << (32 - fixed.getFractionalBits()) != 0)
	{
		for (size_t i = 0; i < fixed.getFractionalBits(); i++)
		{
			if (((fixed.getRawBits() >> shift) & 1) == 1)
				decimal += ((1.f / (1 << i)));
			shift--;
		}
		stream << "." << (int64_t)(decimal * pow(10, fixed.getFractionalBits()));
	}
	// alternative: std::cout << fixed.toFloat();
	return (stream);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
