#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <stdint.h>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		Zombie	*zombieHorde(int N, std::string name);
};

#endif
