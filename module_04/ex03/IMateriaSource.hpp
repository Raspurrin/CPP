#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

#include <iostream>

# define RESET		"\033[0m"
# define ON_YELLOW	"\033[43m"

class IMateriaSource
{
	public:
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
