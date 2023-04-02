#ifndef DOG_HPP
# define DOG_HPP

#include "colour.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

class Dog : public Animal, public WrongAnimal
{
	public:
		Brain	*brain;
		void	makeSound(void) const;

	public:
		Dog(void);
		Dog(const Dog &rhs);
		Dog &operator=(const Dog &rhs);
		~Dog(void);
};

#endif
