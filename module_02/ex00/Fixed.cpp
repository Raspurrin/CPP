#include "Fixed.hpp"

float	Fixed::toFloat(void) const;
{

}

int32_t		Fixed::toint32_t(void) const;
{

}

int32_t Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int32_t const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int32_t nbr);
{

}

Fixed::Fixed(const float nbr);
{
	
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
