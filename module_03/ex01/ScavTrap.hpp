#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		std::string	name;
		int32_t		max_points;
		int32_t		hitpoints;
		int32_t		energy_points;
		int32_t		attack_dmg;
	public:
		void	guardGate(void);

	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap(void);
};

#endif
