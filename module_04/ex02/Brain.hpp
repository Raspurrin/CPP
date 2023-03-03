#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

# define RESET		"\033[0m"
# define ON_PINK	"\033[45m"

class Brain
{
	private:
		std::string *ideas;

	public:
		Brain(void);
		Brain(const Brain &rhs);
		Brain &operator=(const Brain &rhs);
		virtual ~Brain(void);
};

#endif
