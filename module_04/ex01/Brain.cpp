#include "Brain.hpp"

std::string	Brain::getIdea(int32_t i)
{
	return (ideas[i]);
}

void	Brain::setIdea(int32_t i, std::string idea)
{
	if (i > 100 || i < 0)
	{
		std::cout << "I don't have that many ideas :|" << std::endl;
		return;
	}
	ideas[i] = idea;
}

Brain::Brain(void)
{
	ideas = new std::string[100];
	for (size_t i = 0; i < 100; i++)
		ideas[i] = "I have no thought";
	//std::cout << ON_PINK << "Brain's default constructor is called" << RESET << std::endl;
}

Brain::Brain(const Brain &rhs)
{
	std::cout << ON_PINK << "Brain's copy constructor is called" << RESET << std::endl;
	*this = rhs;
}

Brain &Brain::operator=(const Brain &rhs)
{
	for (size_t i = 0; i < 100; i++)
		ideas[i] = rhs.ideas[i];
	std::cout << ON_PINK << "Brain's assignment operator is called" << RESET << std::endl;
	return (*this);
}

Brain::~Brain(void)
{
	delete[] ideas;
	//std::cout << ON_PINK << "Brain's destructor is called" << RESET << std::endl;
}
