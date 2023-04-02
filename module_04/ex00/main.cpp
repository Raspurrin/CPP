#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int32_t	main(void)
{
	const	Dog*	dog1 = new Dog();
	const	Animal*	dog2 = new Dog();
	const	WrongAnimal* dog3 = new Dog();
	const	Animal*	animal = new Animal();
	const	Animal*	cat = new Cat();
	const	WrongAnimal* wronganimal = new WrongAnimal();
	const	WrongAnimal* wrongcat = new WrongCat();

	std::cout << "------------------------------------------" << std::endl;
	std::cout << "dog type: " << dog2->getType() << std::endl;
	std::cout << "cat type: " << cat->getType() << std::endl;
	std::cout << "animal type: " << animal->getType() << std::endl;
	std::cout << "wrong cat type: " << wrongcat->getType() << std::endl;
	std::cout << "wrong dog type: " << dog3->getType() << std::endl;
	std::cout << "wrong animal type: " << wronganimal->getType() << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	dog1->makeSound();
	dog2->makeSound();
	dog3->makeSound();
	cat->makeSound();
	animal->makeSound();
	wronganimal->makeSound();
	wrongcat->makeSound();
	std::cout << "------------------------------------------" << std::endl;
	delete dog1;
	delete animal;
	delete dog2;
	delete cat;
	delete wronganimal;
	delete dog3;
	delete wrongcat;
	return (0);
}
