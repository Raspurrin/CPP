#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int32_t	main(void)
{
	Cat cat;
	Dog dog;
	// Animal animal;
	WrongAnimal wronganimal;
	WrongCat wrongcat;

	std::cout << "dog type: " << dog.getType() << std::endl;
	std::cout << "cat type: " << cat.getType() << std::endl;
	std::cout << "wrong cat type: " << wrongcat.getType() << std::endl;
	// std::cout << "animal type: " << animal.getType() << std::endl;
	std::cout << "wrong animal type: " << wronganimal.getType() << std::endl;
	dog.makeSound();
	cat.makeSound();
	// animal.makeSound();
	wronganimal.makeSound();
	wrongcat.makeSound();
	return (0);
}
