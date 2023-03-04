#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << ON_YELLOW << "MateriaSource's constructor is called" << RESET << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
	std::cout << ON_YELLOW << "MateriaSource's copy constructor is called" <<  std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	std::cout << ON_YELLOW << "MateriaSource's assignment operator is called" << RESET << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << ON_YELLOW << "MateriaSource's destructor is called" << RESET << std::endl;
}
