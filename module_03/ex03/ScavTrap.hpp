#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected: 
		int32_t	energypoints;
	
	protected:
		void	set_energypoints();

	public:
		void	guardGate(void);

	public:
		ScavTrap();
		ScavTrap(std::string name);
		virtual ~ScavTrap(void);
};

#endif
