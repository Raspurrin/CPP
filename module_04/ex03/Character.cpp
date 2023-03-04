#include "Character.hpp"

void Character::equip(AMateria* m)
{
	if (this->cur_idx >= 4)
	{
		std::cout << "Equiped too many materials already!" << std::endl;
		return;
	}
	this->inventory[this->cur_idx] = m;
	this->cur_idx++;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Can only unequip anything in between and including 0 - 3" << std::endl;
		return;
	}
	this->inventory[idx] = NULL;
}

void Character::use(int idx, Character& target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "The index has to be anything in between and including 0 - 3" << std::endl;
		return;
	}
	(*(inventory[idx])).use(target);
}

Character::Character(void)
{
	this->name = "bob";
	std::cout << ON_YELLOW << "Character's constructor is called" << RESET << std::endl;
}

Character::Character(std::string name)
{
	this->name = name;
	std::cout << ON_YELLOW << "Character's constructor is called" << RESET << std::endl;
}

Character::Character(const Character &rhs)
{
	std::cout << ON_YELLOW << "Character's copy constructor is called" <<  std::endl;
}

Character &Character::operator=(const Character &rhs)
{
	std::cout << ON_YELLOW << "Character's assignment operator is called" << RESET << std::endl;
	return (*this);
}

Character::~Character(void)
{
	std::cout << ON_YELLOW << "Character's destructor is called" << RESET << std::endl;
}
