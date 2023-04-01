#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "colour.hpp"
# include <iostream>

class ClapTrap
{
	protected:
		bool	check_energy(void);

		protected:
		std::string	_name;
		int32_t		_maxPoints;
		int32_t		_hitPoints;
		int32_t		_energyPoints;
		int32_t		_attackDmg;

	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &rhs);
		ClapTrap &operator=(const ClapTrap &rhs);
		virtual ~ClapTrap();
};

#endif
