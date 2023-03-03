#include "Animal.hpp"

Animal::Animal(void) :
	type("notype")
{
	std::cout << ON_RED << "Animal's default constructor is called" << RESET << std::endl;
}

void	Animal::makeSound(void)
{
	std::cout << "This animal's sound is undefined" << std::endl;
}

Animal::Animal(std::string type) :
	type(type)
{
	std::cout << ON_RED << "Animal's constructor with string arg is called" << RESET << std::endl;
}

Animal::Animal(const Animal &rhs)
{
	this->type = rhs.type;
	std::cout << ON_RED << "Animal's copy constructor is called" << RESET << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	std::cout << ON_RED << "Animal's assignment operator is called" << RESET << std::endl;
	this->type = rhs.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << ON_RED << "Animal's destructor is called" << RESET << std::endl;
}
