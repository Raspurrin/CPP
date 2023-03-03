#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected: 
	int32_t	energypoints;
	int32_t	init_energypoints;

	public:
		void	guardGate(void);

	public:
		ScavTrap();
		ScavTrap(std::string name);
		virtual ~ScavTrap(void);
};

#endif
