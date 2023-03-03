#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		void		makeSound(void);
		std::string	getType(void) {return type;};

	public:
		Dog(void);
		Dog(const Dog &rhs);
		Dog &operator=(const Dog &rhs);
		virtual ~Dog(void);
};

#endif
