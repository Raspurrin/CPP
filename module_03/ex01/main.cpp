#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int32_t	main(void)
{
	ClapTrap claptrap = ClapTrap("claptrap");
	ScavTrap scavtrap = ScavTrap("scavtrap");
	// claptrap.attack("you");
	// claptrap.takeDamage(14);
	// claptrap.beRepaired(20);
	// claptrap.takeDamage(4);
	// claptrap.beRepaired(2);

	scavtrap.attack("das brot");
	scavtrap.takeDamage(14);
	scavtrap.beRepaired(1);
	scavtrap.takeDamage(4);
	scavtrap.beRepaired(2);
	scavtrap.guardGate();
	return (0);
}
