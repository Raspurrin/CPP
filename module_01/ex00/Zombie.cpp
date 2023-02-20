#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*Zombie::newZombie(std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie;
	zombie->name = name;
	return (zombie);
}

void	Zombie::randomChump(std::string name)
{
	this->newZombie(name);
	this->announce();
}

Zombie::Zombie(void)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " has been eradicated." << std::endl;
	return;
}
