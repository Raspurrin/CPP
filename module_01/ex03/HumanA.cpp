#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->type << std::endl;
	return;
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->type = weapon.getType();
}

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->name = name;
	this->type = weapon.type;
}

HumanA::~HumanA()
{
}
