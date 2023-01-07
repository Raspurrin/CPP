#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		Zombie(std::string name);
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );
		~Zombie(void);

	private:
		std::string name;
		void announce(void);
};

#endif