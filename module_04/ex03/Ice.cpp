#include "Ice.hpp"

AMateria	*Ice::clone() const
{
	return (new Ice);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

Ice::Ice(void) :
	type("ice")
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
