#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA : public Weapon
{
	private:
	std::string	type;

	public:
		void	attack();
		void	setWeapon(Weapon weapon);

	public:
		std::string	name;
		HumanA(std::string name, Weapon weapon);
		~HumanA();
};

#endif
