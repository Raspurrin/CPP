#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "colour.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		void	highFivesGuys(void);

	private:
		FragTrap();

	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &rhs);
		FragTrap &operator=(const FragTrap &rhs);
		virtual ~FragTrap(void);
};

#endif
