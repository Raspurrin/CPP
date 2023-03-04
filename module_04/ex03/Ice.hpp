#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	private:
		const std::string	type;

	public:
		Ice(void);
		Ice(const Ice &rhs);
		Ice &operator=(const Ice &rhs);
		virtual ~Ice(void);
};

#endif
