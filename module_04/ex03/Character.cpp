#include "Character.hpp"

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	std::cout << "in equip() - index: " << cur_idx << std::endl;
	if (this->cur_idx >= 4)
	{
		std::cout << "Equipped too many materials already!" << std::endl;
		return;
	}
	std::cout << "Equipped: " << m->getType() << std::endl;
	this->inventory[this->cur_idx] = m->clone();
	std::cout << "Equipped: " << m->getType() << std::endl;
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

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "The index has to be anything in between and including 0 - 3" << std::endl;
		return;
	}
	inventory[idx]->use(target);
}

Character::Character(void)
{
	for (size_t i = 0; i < 4; i++)
		inventory[i] = NULL;
	this->cur_idx = 0;
	this->name = "bob";
	std::cout << ON_YELLOW << "Character's constructor is called" << RESET << std::endl;
}

Character::Character(std::string name)
{
	for (size_t i = 0; i < 4; i++)
		inventory[i] = NULL;
	this->cur_idx = 0;
	this->name = name;
	std::cout << ON_YELLOW << "Character's constructor is called" << RESET << std::endl;
}

Character::Character(const Character &rhs)
{
	std::cout << ON_YELLOW << "Character's copy constructor is called" <<  std::endl;
}

Character &Character::operator=(const Character &rhs)
{
	std::cout << ON_YELLOW << "Character's assignment operator is called!" << RESET << std::endl;
	return (*this);
}

Character::~Character(void)
{
	std::cout << ON_YELLOW << "Character's destructor is called" << RESET << std::endl;
}
