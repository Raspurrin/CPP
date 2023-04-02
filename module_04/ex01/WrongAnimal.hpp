#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "colour.hpp"

#include <iostream>
#include <stdint.h>

class	WrongAnimal
{
	protected:
		std::string	_wrongtype;

	public:
		virtual void	makeSound(void) const;
		void			setType(std::string type);
		std::string		getType(void) const;

	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &rhs);
		WrongAnimal &operator=(const WrongAnimal &rhs);
		virtual ~WrongAnimal(void);
};

#endif
