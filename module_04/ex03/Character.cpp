#include "Character.hpp"



Character::Character(void)
{
	std::cout << ON_YELLOW << "Character's constructor is called" << RESET << std::endl;
}

Character::Character(const Character &rhs)
{
	std::cout << ON_YELLOW << "Character's copy constructor is called" <<  std::endl;
}

Character &Character::operator=(const Character &rhs)
{
	std::cout << ON_YELLOW << "Character's assignment operator is called" << RESET << std::endl;
	return (*this);
}

Character::~Character(void)
{
	std::cout << ON_YELLOW << "Character's destructor is called" << RESET << std::endl;
}
