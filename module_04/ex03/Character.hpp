#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string	name;
		AMateria	*inventory;

	public:
		std::string const & getName() {return name;};
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, Character& target);

	public:
		Character(void);
		Character(std::string name) : name(name) {};
		Character(const Character &rhs);
		Character &operator=(const Character &rhs);
		virtual ~Character(void);
};

#endif
