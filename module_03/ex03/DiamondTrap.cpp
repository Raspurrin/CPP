#include "DiamondTrap.hpp"

void	DiamondTrap::whoAmI(void)
{
	std::cout << PINK << "My name is: " << name << RESET << std::endl;
	std::cout << PINK << "ClapTrap's name is: " << ClapTrap::name << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->hitpoints = FragTrap::hitpoints;
	this->energy_points = init_energypoints;
	this->attack_dmg = FragTrap::attack_dmg;
	this->max_points = FragTrap::hitpoints;
	this->name = name;
	std::cout << "Diamond: hitpoints: " << this->hitpoints << " energy: " << energy_points << " attack dmg: " << attack_dmg << " hitpoints: " << hitpoints << std::endl;
	std::cout << ON_PURPLE << name << "'s constructor is called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(void)
{
	this->hitpoints = FragTrap::hitpoints;
	this->energy_points = ScavTrap::energy_points;
	this->attack_dmg = FragTrap::attack_dmg;
	this->max_points = FragTrap::hitpoints;
	this->name = "diamondtrap";
	std::cout << "Diamond: hitpoints: " << this->hitpoints << " energy: " << energy_points << " attack dmg: " << attack_dmg << " hitpoints: " << hitpoints << std::endl;
	std::cout << ON_PURPLE << name << "'s default constructor is called" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << ON_PURPLE << name << "'s destructor is called" << RESET << std::endl;
}
