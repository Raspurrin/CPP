#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include "colour.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		void	guardGate(void);
		
	protected:
		void	attack(const std::string& target);
		int32_t	_initEnergyPoints;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		virtual ~ScavTrap(void);
};

#endif
