#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		void	guardGate(void);

	public:
		ScavTrap();
		ScavTrap(std::string name);
		virtual ~ScavTrap(void);
};

#endif
