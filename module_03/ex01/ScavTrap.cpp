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
	std::cout << SKY << name << "'s constructor is called" << RESET << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << SKY << name << "'s destructor is called" << RESET << std::endl;
}
