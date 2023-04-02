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
		std::string getIdea(int32_t i);
		void		setIdea(int32_t i, std::string idea);

	public:
		Brain(void);
		Brain(const Brain &rhs);
		Brain &operator=(const Brain &rhs);
		virtual ~Brain(void);
};

#endif
