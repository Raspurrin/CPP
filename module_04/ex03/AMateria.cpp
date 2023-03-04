#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << ON_YELLOW << "AMateria's constructor is called" << RESET << std::endl;
}

AMateria::AMateria(const AMateria &rhs)
{
	std::cout << ON_YELLOW << "AMateria's copy constructor is called" <<  std::endl;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	std::cout << ON_YELLOW << "AMateria's assignment operator is called" << RESET << std::endl;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << ON_YELLOW << "AMateria's destructor is called" << RESET << std::endl;
}
