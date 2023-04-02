#ifndef DOG_HPP
# define DOG_HPP

#include "colour.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"

class Dog : public Animal, public WrongAnimal
{
	public:
		void	makeSound(void) const;

	public:
		Dog(void);
		Dog(const Dog &rhs);
		Dog &operator=(const Dog &rhs);
		~Dog(void);
};

#endif
