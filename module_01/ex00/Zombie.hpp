#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie	*newZombie(std::string name);
		Zombie();
		~Zombie();
		void announce(void);
		void randomChump(std::string name);
};

#endif
