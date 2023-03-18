#include "Weapon.hpp"

const std::string &Weapon::getType()
{
	const std::string &typeRef = _type;

	return(typeRef);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}
