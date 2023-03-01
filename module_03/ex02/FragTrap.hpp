#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		void	highFivesGuys(void);

	public:
		FragTrap(std::string name);
		~FragTrap(void);
};

#endif
