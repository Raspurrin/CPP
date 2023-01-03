#include "classes.hpp"

void	Contact::display(void)
{
	std::cout << "First name:" << this->first_name << std::endl;
	std::cout << "Last name:" << this->last_name << std::endl;
	std::cout << "Nickname:" << this->nickname << std::endl;
	std::cout << "Phonenumber:" << this->phonenumber << std::endl;
	std::cout << "Darkest secret:" << this->darkest_secret << std::endl;
}

void	display_cell(std::string str)
{
	if (str.size() > 10)
		str.substr(0, 10) + '.';
	std::cout << str << std::setw(10 - str.size()) << "|";
}

/**
 *      index|first_name| last_name|  nickname|
 *          1|		leon|delahamet.|  retardbf| 
 */
void	display_row(int32_t	index, Contact contact)
{
	display_cell(std::to_string(index));
	display_cell(contact.first_name);
	display_cell(contact.last_name);
	display_cell(contact.nickname);
	std::cout << std::endl;
}

void	Phonebook::search(void)
{
	std::string input_name;

	for (size_t i = 0; i < this->contact_amount; i++)
		display_row(i + 1, this->contacts[i]);

	std::cout << "Which contact do you want to view?";
	std::cin >> input_name;
	for (size_t i = 0; i < this->contact_amount; i++)
	{
		if (this->contacts[i].first_name == input_name)
			return (this->contacts[i].display());
	}
	std::cout << "This contact could not be found" << std::endl;
}

void	Phonebook::add(void)
{
	Contact new_contact;

	std::cout << "Enter the first name: ";
	std::cin >> new_contact.first_name;
	std::cout << "Enter the last name: ";
	std::cin >> new_contact.last_name;
	std::cout << "Enter a nickname: ";
	std::cin >> new_contact.nickname;
	std::cout << "Enter the phone number: ";
	std::cin >> new_contact.phonenumber;
	std::cout << "Also enter their darkest deepest secret pls: ";
	std::cin >> new_contact.darkest_secret;

	this->contacts[this->contact_amount] = new_contact;
	this->contact_amount++;
	if (this->contact_amount == 8)
		this->contact_amount = 0;
}

Phonebook::Phonebook(void)
{
	this->contact_amount = 0;
}

Phonebook::~Phonebook(void)
{
}