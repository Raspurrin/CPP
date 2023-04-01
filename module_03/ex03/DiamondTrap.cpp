#include "DiamondTrap.hpp"
#include "colour.hpp"

void	DiamondTrap::whoAmI(void)
{
	std::cout << PINK << "My name is: " << _name << RESET << std::endl;
	std::cout << PINK << "ClapTrap's name is: " << _name << RESET << std::endl;
}

std::string DiamondTrap::getClapTrapName(void)
{
	return (_clapTrapName);
}

DiamondTrap::DiamondTrap(std::string name)
{
	_hitPoints = FragTrap::_hitPoints;
	_maxPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDmg = FragTrap::_initDmg;
	_name = name;
	_clapTrapName = name.append("_clap_name");
	std::cout << "DiamondTrap: hitpoints: " << _hitPoints << " energy: " << _energyPoints << " attack dmg: " << _attackDmg << std::endl;
	std::cout << ON_PURPLE << name << "'s constructor is called. Default HP: " << _hitPoints << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs)
{
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDmg = rhs._attackDmg;
	_maxPoints = rhs._maxPoints;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDmg = rhs._attackDmg;
	_maxPoints = rhs._maxPoints;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << ON_PURPLE << _name << "'s destructor is called" << RESET << std::endl;
}
