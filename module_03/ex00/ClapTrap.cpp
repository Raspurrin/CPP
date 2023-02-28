#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
	std::cout << target << "lost " << attack_dmg << "amount of hp" << std::endl;
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
	if (hitpoints - amount <= 0)
		hitpoints = 0;
	else
		hitpoints -= amount;
	std::cout << name << " took " << amount << "dmg" << std::endl;
	std::cout << hitpoints << " left" << std::endl;
}

// hitspoints: 9 + amount = 14   /    4 + amount = 9
// max_points: 10
// amount: 5
// +1 14
void ClapTrap::beRepaired(unsigned int amount)
{
	if (!check_energy())
		return;
	if (hitpoints + amount >= max_points)
		amount = max_points - hitpoints;
	hitpoints += amount;
	std::cout << name << "  " << amount << "dmg" << std::endl;
	std::cout << hitpoints << " left" << std::endl;
}

ClapTrap(std::string name)
{
	this->name = name;
}

ClapTrap(const ClapTrap &rhs)
{

}

ClapTrap &operator=(const ClapTrap &rhs)
{
	
}


~ClapTrap(void)
{

}
