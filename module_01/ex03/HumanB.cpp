#include "HumanB.hpp"

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->type << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->type = weapon.getType();
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB()
{
}
