#include "Brain.hpp"

Brain::Brain(void)
{
	this->ideas = new std::string[100];
	std::cout << ON_PINK << "Brain's default constructor is called" << RESET << std::endl;
}

Brain::Brain(const Brain &rhs)
{
	std::cout << ON_PINK << "Brain's copy constructor is called" << RESET << std::endl;
}

Brain &Brain::operator=(const Brain &rhs)
{
	std::cout << ON_PINK << "Brain's assignment operator is called" << RESET << std::endl;
	return (*this);
}

Brain::~Brain(void)
{
	delete[] ideas;
	std::cout << ON_PINK << "Brain's destructor is called" << RESET << std::endl;
}
