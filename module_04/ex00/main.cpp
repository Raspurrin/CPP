#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int32_t	main(void)
{
	Cat cat;
	Dog dog;
	Animal animal;

	std::cout << "dog type: " << dog.getType() << std::endl;
	std::cout << "dog type: " << cat.getType() << std::endl;
	std::cout << "animal type: " << animal.getType() << std::endl;
	dog.makeSound();
	cat.makeSound();
	animal.makeSound();
	return (0);
}
