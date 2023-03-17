#include "Zombie.hpp"

int32_t	main(void)
{
	Zombie *horde;
	Zombie zombie = Zombie("aaaaa");
	horde = zombie.zombieHorde(3, "yo");
	horde[0].announce();
	horde[1].announce();
	horde[2].announce();
	horde[3].announce(); // this one won't work
	horde[4].announce(); // but how is it still calling the function successfully?
	return (0);
}
