#ifndef CLASSES_HPP
# define CLASSES_HPP

# include <iostream>
# include <stdint.h>
# include <iomanip>

class Contact
{
	public:
		void	display(void);

		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darkest_secret;
};

class Phonebook
{
	public:
		void	add(void);
		void	search(void);

	private:
		Phonebook();
		~Phonebook();

	private:
		Contact 	contacts[8];
		int32_t		contact_amount;
};

#endif