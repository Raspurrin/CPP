#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
	std::cout << RED << target << " lost " << attack_dmg << " HP" << RESET << std::endl;
}

bool	ClapTrap::check_energy(void)
{
	if (energy_points != 0)
	{
		energy_points--;
		return (true);
	}
	return (false);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!check_energy())
		return;
	if (hitpoints - (signed int)amount <= 0)
		hitpoints = 0;
	else
		hitpoints -= amount;
	std::cout << RED << name << " took " << amount << " dmg" << RESET << std::endl;
	std::cout << YELLOW << hitpoints << " HP left" << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!check_energy())
		return;
	if (hitpoints + amount >= max_points)
		amount = max_points - hitpoints;
	hitpoints += amount;
	std::cout << GREEN << name << "  repaired itself and gained " << amount << " HP" << RESET << std::endl;
	std::cout << YELLOW << hitpoints << " HP left" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	hitpoints(10), \
	energy_points(10), \
	attack_dmg(10), \
	max_points(10)
{
	this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap &rhs) : 
	hitpoints(rhs.hitpoints), \
	energy_points(rhs.energy_points), \
	attack_dmg(rhs.attack_dmg), \
	max_points(rhs.max_points)
{
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	this->hitpoints = rhs.hitpoints;
	this->energy_points = rhs.energy_points;
	this->attack_dmg = rhs.attack_dmg;
	this->max_points = rhs.max_points;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
}
