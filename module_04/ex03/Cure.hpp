#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &rhs);
		Cure &operator=(const Cure &rhs);
		virtual ~Cure(void);
};

#endif
