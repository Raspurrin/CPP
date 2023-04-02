#include "WrongCat.hpp"

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrongcat: brrrrauiuwww .w.~" << std::endl;
}

WrongCat::WrongCat(void)
{
	_wrongtype = "WrongCat";
	std::cout << ON_PURPLE << "WrongCat's constructor is called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &rhs)
{
	std::cout << ON_PURPLE << "WrongCat's copy constructor is called" << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << ON_PURPLE << "WrongCat's assignment operator is called" << RESET << std::endl;
	_wrongtype = rhs._wrongtype;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << ON_PURPLE << "WrongCat's destructor is called" << RESET << std::endl;
}
