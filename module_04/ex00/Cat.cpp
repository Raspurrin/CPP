#include "Cat.hpp"

void	Cat::makeSound(void)
{
	std::cout << "Miiaaauuuuuwwww~" << std::endl;
}

Cat::Cat(void) : 
	Animal("cat")
{
	std::cout << ON_PURPLE << "Cat's constructor is called" << RESET << std::endl;
}

Cat::Cat(const Cat &rhs)
{
	std::cout << ON_PURPLE << "Cat's copy constructor is called" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << ON_PURPLE << "Cat's assignment operator is called" << RESET << std::endl;
	this->type = rhs.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << ON_PURPLE << "Cat's destructor is called" << RESET << std::endl;
}
