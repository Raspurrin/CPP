#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

# define RESET		"\033[0m"
# define BLACK		"\033[0;30m"
# define RED		"\033[0;31m"
# define GREEN		"\033[0;32m"
# define YELLOW		"\033[0;33m"
# define PURPLE		"\033[0;34m"
# define PINK		"\033[0;35m"
# define SKY		"\033[0;36m"

# define ON_RED 	"\033[41m"
# define ON_PURPLE	"\033[44m"
# define ON_PINK	"\033[45m"

class ClapTrap
{
	private:
		bool	check_energy(void);
	protected:
		std::string	name;
		int32_t		max_points;
		int32_t		hitpoints;
		int32_t		energy_points;
		int32_t		attack_dmg;
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &rhs);
		ClapTrap &operator=(const ClapTrap &rhs);
		~ClapTrap();
};

#endif
