#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	return;
}

void	HumanA::setWeapon(Weapon *weapon)
{
	_weapon = weapon;
}

HumanA::HumanA(std::string name, Weapon *weapon)
{
	_name = name;
	_weapon = weapon;
}

HumanA::~HumanA()
{
}
