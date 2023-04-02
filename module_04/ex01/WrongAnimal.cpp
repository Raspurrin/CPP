#include "WrongAnimal.hpp"

void	WrongAnimal::setType(std::string type)
{
	_wrongtype = type;
}

std::string	WrongAnimal::getType(void) const
{
	return (_wrongtype);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << _wrongtype << ": (WrongAnimal) AAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) :
	_wrongtype(type)
{
	//std::cout << ON_RED << "WrongAnimal's constructor with string arg is called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(void) :
	_wrongtype("A VERY WRONG ANIMAL")
{
	//std::cout << ON_RED << "Animal's default constructor is called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
{
	_wrongtype = rhs._wrongtype;
	std::cout << ON_RED << "WrongAnimal's copy constructor is called" << RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << ON_RED << "WrongAnimal's assignment operator is called" << RESET << std::endl;
	_wrongtype = rhs._wrongtype;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	//std::cout << ON_RED << "WrongAnimal's destructor is called" << RESET << std::endl;
}
