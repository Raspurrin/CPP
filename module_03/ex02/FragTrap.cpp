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
	std::cout << SKY << name << "'s constructor is called" << RESET << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << SKY << name << "'s destructor is called" << RESET << std::endl;
}
