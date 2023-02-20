#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	size_t	i;
	Zombie	*zombieHorde;

	i = 0;
	zombieHorde = new Zombie[N];
	while (i < N)
	{
		zombieHorde[i].name = name;
		i++;
	}
	return (zombieHorde);
}

Zombie::Zombie()
{
	return;
}

Zombie::~Zombie()
{
	return;
}
