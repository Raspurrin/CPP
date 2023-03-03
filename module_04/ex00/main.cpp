#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int32_t	main(void)
{
	Cat cat;
	Dog dog;

	std::cout << "dog type: " << dog.getType() << std::endl;
	std::cout << "dog type: " << cat.getType() << std::endl;
	return (0);
}
