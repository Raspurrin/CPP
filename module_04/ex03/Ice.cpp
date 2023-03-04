#include "Ice.hpp"

void	AMateria::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

Ice::Ice(void)
{
	std::cout << ON_YELLOW << "Ice's constructor is called" << RESET << std::endl;
}

Ice::Ice(const Ice &rhs)
{
	std::cout << ON_YELLOW << "Ice's copy constructor is called" <<  std::endl;
}

Ice &Ice::operator=(const Ice &rhs)
{
	std::cout << ON_YELLOW << "Ice's assignment operator is called" << RESET << std::endl;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << ON_YELLOW << "Ice's destructor is called" << RESET << std::endl;
}
