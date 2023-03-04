#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		std::string const & getName() {return name;};

	public:
		Character(void);
		Character(std::string name);
		Character(const Character &rhs);
		Character &operator=(const Character &rhs);
		virtual ~Character(void);
};

#endif
