#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		bool	check_energy(void);
	protected:
		std::string	name;
		uint32_t	max_points;
		uint32_t	hitpoints;
		int32_t		energy_points;
		int32_t		attack_dmg;
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	public:
		ClapTrap(std::string name) : hitpoints(10), energy_points(10), attack_dmg(0), max_points(10) {};
		ClapTrap(const ClapTrap &rhs);
		ClapTrap &operator=(const ClapTrap &rhs);
		~ClapTrap();
};

#endif