#include "DiamondTrap.hpp"

int32_t	main(void)
{
	// ClapTrap claptrap = ClapTrap("claptrap");
	DiamondTrap diamondtrap = DiamondTrap("diamondtrap");
	diamondtrap.attack("the blackhole system");
	diamondtrap.takeDamage(14);
	diamondtrap.beRepaired(20);
	diamondtrap.takeDamage(4);
	diamondtrap.beRepaired(2);
	diamondtrap.whoAmI();
	diamondtrap.highFivesGuys();
	std::cout << ON_PINK << "behold the name: " << diamondtrap.getClapTrapName() << std::endl;
	return (0);
}
