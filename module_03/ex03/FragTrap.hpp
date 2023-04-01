#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "colour.hpp"

class FragTrap : virtual public ClapTrap
{
	protected: 
		int32_t	_initDmg;
	public:
		void	highFivesGuys(void);

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &rhs);
		FragTrap &operator=(const FragTrap &rhs);
		virtual ~FragTrap(void);
};

#endif
