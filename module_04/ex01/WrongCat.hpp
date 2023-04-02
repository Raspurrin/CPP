#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "Animal.hpp"
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		void	makeSound(void) const;

	public:
		WrongCat(void);
		WrongCat(const WrongCat &rhs);
		WrongCat &operator=(const WrongCat &rhs);
		~WrongCat(void);
};

#endif
