#include "Phonebook.hpp"

void	Phonebook::search(void)
{
	size_t		input_nbr;
	std::string	input;

	if (_contactAmount == 0)
	{
		std::cout << PINK << "Rip no friends...\nYet! Keep searchin', I believe in you :D" << RESET << std::endl;
		return;
	}
	for (size_t i = 0; i < _contactAmount; i++)
		_contacts[i].displayRow(i + 1);
	std::cout << PINK << "Which contact do you want to view? " << RESET;
	std::getline(std::cin, input);
	input_nbr = atoi(input.c_str());
	if (input_nbr > _contactAmount || input_nbr < 1)
		std::cout << RED << "This contact could not be found" << RESET << std::endl;
	else
		_contacts[input_nbr - 1].displayFull();
}

void	Phonebook::add(void)
{
	_contacts[_index].newContact();
	if (_contactAmount <= 8)
		_contactAmount++;
	_index++;
	if (_index == 8)
		_index = 0;
}

void	Phonebook::start(void)
{
	std::string input;

	std::cout << PINK << "Please enter a command: ADD, SEARCH or EXIT: " << RESET;
	while (std::getline(std::cin, input))
	{
		try
		{
			if (input.compare("EXIT") == 0)
				break;
			else if (input.compare("SEARCH") == 0)
				Phonebook::search();
			else if (input.compare("ADD") == 0)
				Phonebook::add();
		}
		catch(EofException)
		{
			return;
		}
		std::cout << PINK << "Please enter a command: ADD, SEARCH or EXIT: " << RESET;
	}
}

Phonebook::Phonebook(void)
{
	_index = 0;
	_contactAmount = 0;
}

Phonebook::~Phonebook(void)
{
}
