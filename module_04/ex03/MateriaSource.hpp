#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

#include <iostream>

# define RESET		"\033[0m"
# define ON_YELLOW	"\033[43m"

class AMateria;

class MateriaSource : public IMateriaSource
{
	private:
		int32_t		cur_idx;
		AMateria	*knowledge[4];

	public:
		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &rhs);
		MateriaSource &operator=(const MateriaSource &rhs);
		virtual ~MateriaSource(void);
};

#endif
