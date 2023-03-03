#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) :
	type("notype")
{
	std::cout << ON_RED << "WrongAnimal's default constructor is called" << RESET << std::endl;
}

void	WrongAnimal::makeSound(void)
{
	std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) :
	type(type)
{
	std::cout << ON_RED << "WrongAnimal's constructor with string arg is called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
{
	this->type = rhs.type;
	std::cout << ON_RED << "WrongAnimal's copy constructor is called" << RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << ON_RED << "WrongAnimal's assignment operator is called" << RESET << std::endl;
	this->type = rhs.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << ON_RED << "WrongAnimal's destructor is called" << RESET << std::endl;
}
