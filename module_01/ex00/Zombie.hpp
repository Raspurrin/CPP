#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

# define BLACK		"\033[0;30m"
# define RED		"\033[0;31m"
# define GREEN		"\033[0;32m"
# define RESET		"\033[0m"

class Zombie
{
	private:
		std::string _name;

	public:
		void announce(void);
		void randomChump(std::string name);
		Zombie	*newZombie(std::string name);		

	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
};

#endif
