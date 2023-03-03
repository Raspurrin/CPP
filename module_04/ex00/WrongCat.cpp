#include "WrongCat.hpp"

void	WrongCat::makeSound(void)
{
	std::cout << "brrrrauiuwww .w.~" << std::endl;
}

WrongCat::WrongCat(void) : 
	Animal("WrongCat")
{
	std::cout << ON_PURPLE << "WrongCat's constructor is called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &rhs)
{
	std::cout << ON_PURPLE << "WrongCat's copy constructor is called" << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << ON_PURPLE << "WrongCat's assignment operator is called" << RESET << std::endl;
	this->type = rhs.type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << ON_PURPLE << "WrongCat's destructor is called" << RESET << std::endl;
}
