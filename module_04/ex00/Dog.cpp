#include "Dog.hpp"

void	Dog::makeSound(void) const
{
	std::cout << "Dog: BORK BORK BORK" << std::endl;
}

Dog::Dog(void) : 
	Animal("dog")
{
	// this->_type = "Dog";
	std::cout << ON_YELLOW << "Dog's constructor is called" << RESET << std::endl;
}

Dog::Dog(const Dog &rhs)
{
	std::cout << ON_YELLOW << "Dog's copy constructor is called" <<  std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << ON_YELLOW << "Dog's assignment operator is called" << RESET << std::endl;
	this->_type = rhs._type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << ON_YELLOW << "Dog's destructor is called" << RESET << std::endl;
}
