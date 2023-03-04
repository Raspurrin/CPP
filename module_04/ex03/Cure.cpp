#include "Cure.hpp"

AMateria	*Cure::clone() const
{
	return (new Cure);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::Cure(void)
{
	type = "cure";
	std::cout << ON_YELLOW << "Cure's constructor is called" << RESET << std::endl;
}

Cure::Cure(const Cure &rhs)
{
	std::cout << ON_YELLOW << "Cure's copy constructor is called" <<  std::endl;
}

Cure &Cure::operator=(const Cure &rhs)
{
	std::cout << ON_YELLOW << "Cure's assignment operator is called" << RESET << std::endl;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << ON_YELLOW << "Cure's destructor is called" << RESET << std::endl;
}
