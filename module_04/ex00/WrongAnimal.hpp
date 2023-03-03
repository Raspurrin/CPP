#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <stdint.h>

# define RESET		"\033[0m"
# define ON_RED 	"\033[41m"
# define ON_YELLOW	"\033[43m"
# define ON_PURPLE	"\033[44m"
# define ON_PINK	"\033[45m"

class	WrongAnimal
{
	protected:
		std::string	type;

	public:
		void		makeSound(void);
		std::string	getType(void) {return type;};

	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &rhs);
		WrongAnimal &operator=(const WrongAnimal &rhs);
		virtual ~WrongAnimal(void);
};

#endif
