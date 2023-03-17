#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <stdint.h>

#include "Contact.hpp"

void	getLineCheck(std::string &str, std::string msg);

class Phonebook
{
	public:
		void	start(void);

	private:
		void	add(void);
		void	search(void);
		void	showEntries(void);
		void	randomMessage(void);

	private:
		Contact		_contacts[8];
		int32_t		_contactAmount;
		int32_t		_index;

	public:
		Phonebook();
		~Phonebook();
};

#endif
