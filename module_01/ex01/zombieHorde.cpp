#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*zombieHorde;

	std::cout << PINK << "THE HORDE OF " << name << "'s HAS ARRIVED!" << std::endl;
	zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombieHorde[i].setName(name);
	std::cout << RESET;
	return (zombieHorde);
}
