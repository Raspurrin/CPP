#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include "colour.hpp"

class ScavTrap : public ClapTrap
{
	private:
		ScavTrap();

	public:
		void	guardGate(void);

	public:
		
		ScavTrap(std::string name);
		~ScavTrap(void);
};

#endif
