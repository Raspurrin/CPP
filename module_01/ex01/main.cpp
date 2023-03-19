#include "Zombie.hpp"

int32_t	main(void)
{
	Zombie *horde;
	Zombie zombie = Zombie("aaaaa");
	Zombie *Imperator = zombie.newZombie("Imperator");
	zombie.randomChump("Demetori");
	
	horde = zombie.zombieHorde(3, "yo");
	horde[0].announce();
	horde[1].announce();
	horde[2].announce();
	delete Imperator;
	delete[] horde;
	return (0);
}
