#pragma one

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
		bool	checkDupContact(std::string contact);

	private:
		Contact 	_contacts[8];
		int32_t		_contactAmount;
		int32_t		_index;

	public:
		Phonebook();
		~Phonebook();
};
