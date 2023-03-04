#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <stdint.h>

# define RESET		"\033[0m"
# define ON_RED 	"\033[41m"
# define ON_YELLOW	"\033[43m"
# define ON_PURPLE	"\033[44m"
# define ON_PINK	"\033[45m"

class AMateria
{
	protected:
		// ?

	public:
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	public:
		AMateria();
		AMateria(const AMateria &rhs);
		AMateria(std::string const & type);
		AMateria &operator=(const AMateria &rhs);
		~AMateria();

};

#endif
