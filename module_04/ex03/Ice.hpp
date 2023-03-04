#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		AMateria*	clone() const;
		void		use(ICharacter& target);

	public:
		Ice(void);
		Ice(const Ice &rhs);
		Ice &operator=(const Ice &rhs);
		virtual ~Ice(void);
};

#endif
