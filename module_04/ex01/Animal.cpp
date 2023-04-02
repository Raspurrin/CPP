#include "Animal.hpp"

void	Animal::setType(std::string type)
{
	_type = type;
}

std::string	Animal::getType(void) const
{
	return (_type);
}

void	Animal::makeSound(void) const
{
	std::cout << _type << ": (Animal) I-E-A-I-A-I-O" << std::endl;
}

Animal::Animal(std::string type) :
	_type(type)
{
	//std::cout << ON_RED << "Animal's constructor with string arg is called" << RESET << std::endl;
}

Animal::Animal(void) :
	_type("a very generic animal")
{
	//std::cout << ON_RED << "Animal's default constructor is called" << RESET << std::endl;
}

Animal::Animal(const Animal &rhs)
{
	_type = rhs._type;
	std::cout << ON_RED << "Animal's copy constructor is called" << RESET << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	std::cout << ON_RED << "Animal's assignment operator is called" << RESET << std::endl;
	_type = rhs._type;
	return (*this);
}

Animal::~Animal(void)
{
	//std::cout << ON_RED << "Animal's destructor is called" << RESET << std::endl;
}
