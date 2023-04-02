#include "Dog.hpp"
#include "Brain.hpp"
#include "Animal.hpp"

void	Dog::makeSound(void) const
{
	std::cout << "dog: BORK BORK BORK" << std::endl;
}

Dog::Dog(void) : 
	Animal("dog")
{
	brain = new Brain();
	//std::cout << ON_YELLOW << "Dog's constructor is called" << RESET << std::endl;
}

Dog::Dog(const Dog &rhs)
{
	brain = rhs.brain;
	_type = rhs._type;
	std::cout << ON_YELLOW << "Dog's copy constructor is called" <<  std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << ON_YELLOW << "Dog's assignment operator is called" << RESET << std::endl;
	brain = rhs.brain;
	_type = rhs._type;
	return (*this);
}

Dog::~Dog(void)
{
	delete brain;
	//std::cout << ON_YELLOW << "Dog's destructor is called" << RESET << std::endl;
}
