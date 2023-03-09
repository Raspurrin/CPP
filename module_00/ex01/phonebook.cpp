#include "Phonebook.hpp"

void	Phonebook::showEntries(void)
{
	
	std::cout << SKY << "=========================================" << std::endl;
	std::cout << 		"|   |" << RESET << "First name:" << SKY << "|" << RESET << "Last name: " << SKY << "|" << RESET << "Nickname:  " << SKY << "|" << std::endl;
	for (size_t i = 0; i < _contactAmount; i++)
		_contacts[i].displayRow(i + 1);
	std::cout << SKY << "=========================================" << std::endl;
}

void	Phonebook::randomMessage(void)
{
	srand(time(0));
	size_t gamble = rand();
	if (gamble % 2 == 0)
		std::cout << SKY << "Rip no friends...\nYet! Keep searchin', I believe in you :D" << RESET << std::endl;
	else
		std::cout << RED << "Lmao, add some contacts or something o-o Kinda cringe bro" << RESET << std::endl;
}

void	Phonebook::search(void)
{
	size_t		input_nbr;
	std::string	input;

	if (_contactAmount == 0)
	{
		randomMessage();
		return;
	}
	showEntries();
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

	try 
	{
		do {
			if (input.compare("EXIT") == 0)
				break;
			else if (input.compare("SEARCH") == 0)
				Phonebook::search();
			else if (input.compare("ADD") == 0)
				Phonebook::add();
			std::cout << PINK << "Please enter a command: ADD, SEARCH or EXIT: " << RESET;
		}	while (getline(std::cin, input));
	}
	catch(EofException)
	{
		return;
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
