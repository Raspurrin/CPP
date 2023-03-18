#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*Zombie::newZombie(std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie;
	zombie->_name = name;
	std::cout << "Wow, " << name << ", a zombie with longetivity was created. Revolutionary" << std::endl;
	return (zombie);
}

void	Zombie::randomChump(std::string name)
{
	std::cout << "Random temporary zombie created: " << name << "will soon die ._." << std::endl;
	Zombie random = Zombie("Rand");
	random.announce();
}

Zombie::Zombie(std::string name) :
	_name(name)
{
	std::cout << name << "started programming and became a zombie. Rip :C" << std::endl;
}

Zombie::Zombie(void)
{
	std::cout << "Some person started programming and became a zombie. Rip :C" << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " was already dead, but now he's... More dead." << std::endl;
	return;
}
