#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class ICharacter
{
	protected:
		std::string	name;;
		size_t		cur_idx;;
		AMateria	*inventory[4];

	public:
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

	public:
		ICharacter(void);
		ICharacter(const ICharacter &rhs);
		ICharacter &operator=(const ICharacter &rhs);
		virtual ~ICharacter(void);
};

#endif
