#include "classes.hpp"

void	Contact::display(void)
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phonenumber: " << this->phonenumber << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

void	display_cell(std::string str)
{
	size_t	str_size;

	str_size = str.size();
	if (str_size > 10)
		str = str.substr(0, 9) + '.';
	if (str_size < 10)
		std::cout << std::setw(10 - str_size) << ' ';
	std::cout << str << "|";
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

	std::cout << "Which contact do you want to view? ";
	std::cin >> input_name;
	for (size_t i = 0; i < this->contact_amount; i++)
	{
		if (this->contacts[i].first_name == input_name)
			return (this->contacts[i].display());
	}
	std::cout << "This contact could not be found" << std::endl;
}

void	getline_check(std::string &str, std::string msg)
{
	while (true)
	{
		std::cout << msg;
		std::getline(std::cin, str);
		if (std::cin)
			break;
	}
}

void	Phonebook::add(void)
{
	Contact new_contact;

	std::cin.ignore();
	getline_check(new_contact.first_name, "Enter the first name: ");
	getline_check(new_contact.last_name, "Enter the last name: ");
	getline_check(new_contact.nickname, "Enter a nickname: ");
	getline_check(new_contact.phonenumber, "Enter the phone number: ");
	getline_check(new_contact.darkest_secret, "Also enter their darkest deepest secret pls: ");
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