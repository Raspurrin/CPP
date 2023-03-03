#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int32_t	main(void)
{
	Animal animol[100];
	Cat cat;
	Dog dog;
	
	for (size_t i = 0; i < 100; i++)
	{
		if (i < 50)
			animol[i] = Cat();
		else
			animol[i] = Dog();
	}
	return (0);
}
