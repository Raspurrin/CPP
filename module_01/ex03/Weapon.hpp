#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	public:
		std::string type;
		const std::string	&getType();
		void				setType(std::string);
		Weapon(std::string type);
		Weapon();
		~Weapon();
};

#endif
