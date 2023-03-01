#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int32_t	main(void)
{
	ClapTrap claptrap = ClapTrap("claptrap");
	FragTrap fragtrap = FragTrap("fragtrap");
	claptrap.attack("you");
	claptrap.takeDamage(14);
	claptrap.beRepaired(20);
	claptrap.takeDamage(4);
	claptrap.beRepaired(2);

	fragtrap.attack("you");
	fragtrap.takeDamage(14);
	fragtrap.beRepaired(1);
	fragtrap.takeDamage(4);
	fragtrap.beRepaired(2);
	fragtrap.highFivesGuys();
	return (0);
}
