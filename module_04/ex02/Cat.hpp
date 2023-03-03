#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;

	public:
		void		makeSound(void);
		std::string	getType(void) {return type;};

	public:
		Cat(void);
		Cat(const Cat &rhs);
		Cat &operator=(const Cat &rhs);
		virtual ~Cat(void);
};

#endif
