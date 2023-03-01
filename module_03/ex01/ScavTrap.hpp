#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		void	guardGate(void);

	public:
		ScavTrap(std::string name);
		~ScavTrap(void);
};

#endif
