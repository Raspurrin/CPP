#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	protected:
		std::string	name;
		size_t		cur_idx;
		AMateria	*inventory[4];

	public:
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	public:
		Character(void);
		Character(std::string name);
		Character(const Character &rhs);
		Character &operator=(const Character &rhs);
		~Character(void);
};

#endif
