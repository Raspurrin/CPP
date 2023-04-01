#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>
#include <stdint.h>

class DiamondTrap : public FragTrap, public ScavTrap
{
	protected:
		std::string _clapTrapName;

	public:
		void	whoAmI(void);
		using ScavTrap::attack;
		std::string getClapTrapName(void);

	private:
		DiamondTrap();

	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &rhs);
		DiamondTrap &operator=(const DiamondTrap &rhs);
		~DiamondTrap(void);
};

#endif
