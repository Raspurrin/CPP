#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int32_t	main(void)
{
	Animal *animol[100];
	Cat	*cat;
	Dog	*dog;
	dog = new Dog;
	cat = new Cat;
	Cat *catcopy;
	Dog dogcopy;
	
	for (size_t i = 0; i < 100; i++)
	{
		if (i < 50)
			animol[i] = new Cat();
		else
			animol[i] = new Dog();
	}

	std::cout << "this is: " << animol[45]->getType() << std::endl;
	std::cout << "this is: " << animol[69]->getType() << std::endl;
	
	catcopy = cat;
	
	std::cout << "Cat has the address of: " << &cat << std::endl;
	std::cout << "dog has the address of: " << &dog << std::endl;
	std::cout << "Catcopy has the address of: " << &catcopy << std::endl;
	std::cout << "dogcopy has the address of: " << &dogcopy << std::endl;
	dog->brain->setIdea(3, "I have no clue");
	std::cout << "Dog's idea: " << dog->brain->getIdea(3) << ". Brain address: " << &dog->brain << &std::endl;
	dogcopy = *dog;
	std::cout << "Dogcopy's idea: " << dogcopy.brain->getIdea(3) << ". Brain address: " << &dogcopy.brain << &std::endl;;

	return (0);
}
