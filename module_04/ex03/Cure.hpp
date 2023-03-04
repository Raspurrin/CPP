#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	private:
		private:
		const std::string	type;

	public:
		std::string const &	getType() const {return type;};
		AMateria*	clone() const;
		void		use(ICharacter& target);

	public:
		Cure(void);
		Cure(const Cure &rhs);
		Cure &operator=(const Cure &rhs);
		virtual ~Cure(void);
};

#endif
