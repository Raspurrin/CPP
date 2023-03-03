#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "Animal.hpp"

class WrongCat : public Animal
{
	public:
		void		makeSound(void);
		std::string	getType(void) {return type;};

	public:
		WrongCat(void);
		WrongCat(const WrongCat &rhs);
		WrongCat &operator=(const WrongCat &rhs);
		virtual ~WrongCat(void);
};

#endif
