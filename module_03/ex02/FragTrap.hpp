#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private: 
		std::string	name;
		int32_t		max_points;
		int32_t		hitpoints;
		int32_t		energy_points;
		int32_t		attack_dmg;
	public:
		void	highFivesGuys(void);
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap(void);
};

#endif
