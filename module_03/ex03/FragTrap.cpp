#include "FragTrap.hpp"

void	FragTrap::highFivesGuys(void)
{
	std::cout << PINK << name << ": High fiiiiive" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->hitpoints = 100;
	this->energy_points = 100;
	this->attack_dmg = 30;
	this->max_points = 100;
	this->name = name;
	std::cout << ON_PINK << name << "'s constructor is called" << RESET << std::endl;
}

FragTrap::FragTrap(void)
{
	this->hitpoints = 100;
	this->energy_points = 100;
	this->attack_dmg = 30;
	this->max_points = 100;
	this->name = "fragtrap";
	std::cout << "Fragtrap: hitpoints: " << this->hitpoints << " energy: " << energy_points << " attack dmg: " << attack_dmg << " hitpoints: " << hitpoints << std::endl;
	std::cout << "Claptrap: hitpoints: " << ClapTrap::hitpoints << " energy: " << ClapTrap::energy_points << " attack dmg: " << ClapTrap::attack_dmg << " hitpoints: " << ClapTrap::hitpoints << std::endl;
	std::cout << ON_PINK << name << "'s constructor is called" << RESET << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << ON_PINK << name << "'s destructor is called" << RESET << std::endl;
}
