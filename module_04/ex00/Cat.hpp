#ifndef CAT_HPP
# define CAT_HPP

#include "colour.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"

class Cat : public Animal, public WrongAnimal
{
	public:
		void	makeSound(void) const;

	public:
		Cat(void);
		Cat(const Cat &rhs);
		Cat &operator=(const Cat &rhs);
		~Cat(void);
};

#endif
