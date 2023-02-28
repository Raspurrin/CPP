#include "ClapTrap.hpp"

int32_t	main(void)
{
	ClapTrap claptrap = ClapTrap("claptrap");
	claptrap.attack("you");
	claptrap.takeDamage(14);
	claptrap.beRepaired(20);
	claptrap.takeDamage(4);
	claptrap.beRepaired(2);
	return (0);
}
