#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*Zombie::newZombie(std::string _name)
{
	Zombie	*zombie;

	zombie = new Zombie;
	zombie->_name = _name;
	return (zombie);
}

void	Zombie::randomChump(std::string name)
{
	Zombie random = Zombie("Rand");
	random.announce();
}

Zombie::Zombie(std::string name) :
	_name(name)
{
}

Zombie::Zombie(void)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " was already dead, but now he's... More dead." << std::endl;
	return;
}
