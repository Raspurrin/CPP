#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <stdint.h>

# define RESET		"\033[0m"
# define ON_RED 	"\033[41m"
# define ON_YELLOW	"\033[43m"
# define ON_PURPLE	"\033[44m"
# define ON_PINK	"\033[45m"

class	Animal
{
	protected:
		std::string	type;

	public:
		void		makeSound(void);
		std::string	getType(void) {return type;};

	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &rhs);
		Animal &operator=(const Animal &rhs);
		virtual ~Animal(void);
};

#endif
