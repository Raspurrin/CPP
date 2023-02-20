#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB : public Weapon
{
	private:
		std::string	type;

	public:
		void	attack();
		void	setWeapon(Weapon weapon);

	public:
		std::string	name;
		HumanB(std::string name);
		~HumanB();
};

#endif
