#include "Zombie.hpp"

int main(int argc, char const *argv[])
{
	Zombie *zombie; 
	zombie = zombie->newZombie("HiMark");
	zombie->announce();

	delete(zombie);
	return 0;
}
