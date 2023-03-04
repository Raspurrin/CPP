#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
	std::cout << ON_YELLOW << "ICharacter's constructor is called" << RESET << std::endl;
}

ICharacter::ICharacter(const ICharacter &rhs)
{
	std::cout << ON_YELLOW << "ICharacter's copy constructor is called" <<  std::endl;
}

ICharacter &ICharacter::operator=(const ICharacter &rhs)
{
	std::cout << ON_YELLOW << "ICharacter's assignment operator is called" << RESET << std::endl;
	return (*this);
}

ICharacter::~ICharacter(void)
{
	std::cout << ON_YELLOW << "ICharacter's destructor is called" << RESET << std::endl;
}
