#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>
#include <stdint.h>

class DiamondTrap : public ScavTrap, public FragTrap
{
	protected:
		std::string	name;
		int32_t		max_points;
		int32_t		hitpoints;
		int32_t		energy_points;
		int32_t		attack_dmg;
	public:
		void	whoAmI(void);

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap(void);
};

#endif
