#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		std::string	name;
		int32_t		maxpoints;
		int32_t		hitpoints;
		int32_t		energypoints;
		int32_t		attack_dmg;
		int32_t		yo;

	protected:
		int32_t	get_maxpoints() {return maxpoints;}
		int32_t	get_hitpoints() {return hitpoints;}
		int32_t	get_energypoints() {return energypoints;}
		int32_t	get_attackdmg() {return attack_dmg;}

	public:
		void	guardGate(void);

	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap(void);
};

#endif
