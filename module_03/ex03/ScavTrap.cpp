#include "ScavTrap.hpp"


void	ScavTrap::guardGate(void)
{
	std::cout << SKY << name << " is now in gatekeeper mode" << RESET << std::endl;
}



ScavTrap::ScavTrap(std::string name)
{
	this->hitpoints = 100;
	this->energy_points = 50;
	this->attack_dmg = 20;
	this->max_points = 100;
	this->name = name;
	std::cout << ON_YELLOW << name << "'s constructor is called" << RESET << std::endl;
}

ScavTrap::ScavTrap(void)
{
	this->hitpoints = 100;
	this->energy_points = 50;
	init_energypoints = this->energy_points;
	this->attack_dmg = 20;
	this->max_points = 100;
	this->name = "scavtrap";
	std::cout << "Scavtrap: hitpoints: " << this->hitpoints << " energy: " << energy_points << " attack dmg: " << attack_dmg << " hitpoints: " << hitpoints << std::endl;
	std::cout << ON_YELLOW << name << "'s constructor is called" << RESET << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << ON_YELLOW << name << "'s destructor is called" << RESET << std::endl;
}
