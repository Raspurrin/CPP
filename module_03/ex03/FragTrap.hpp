#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		void	highFivesGuys(void);

	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap(void);
};

#endif
