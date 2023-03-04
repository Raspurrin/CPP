#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
{
	std::cout << ON_YELLOW << "IMateriaSource's constructor is called" << RESET << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource &rhs)
{
	std::cout << ON_YELLOW << "IMateriaSource's copy constructor is called" <<  std::endl;
}

IMateriaSource &IMateriaSource::operator=(const IMateriaSource &rhs)
{
	std::cout << ON_YELLOW << "IMateriaSource's assignment operator is called" << RESET << std::endl;
	return (*this);
}

IMateriaSource::~IMateriaSource(void)
{
	std::cout << ON_YELLOW << "IMateriaSource's destructor is called" << RESET << std::endl;
}
