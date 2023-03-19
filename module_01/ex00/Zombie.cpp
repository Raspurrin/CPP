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
	std::cout << RED << "Wow, a zombie with longetivity, " << name << ", was created. Revolutionary" << std::endl;
	return (zombie);
}

void	Zombie::randomChump(std::string name)
{
	Zombie random = Zombie(name);
	std::cout << RED << name << " will soon die because he no on heap ._." << RESET << std::endl;
	random.announce();
}

Zombie::Zombie(std::string name) :
	_name(name)
{
	std::cout << GREEN << name << " started programming and became a zombie. Rip :C" << std::endl;
}

Zombie::Zombie(void)
{
	std::cout << "Some person started programming and became a zombie. Rip :C" << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << BLACK << _name << " was already dead, but now he's... More dead." << std::endl;
	return;
}
