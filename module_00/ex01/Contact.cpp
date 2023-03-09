#include "Contact.hpp"

void	displayCell(std::string str)
{
	size_t	str_size;

	str_size = str.size();
	if (str_size > 10)
		str = str.substr(0, 9) + '.';
	std::cout << SKY << std::setw(11) << std::left << str << "|" << RESET;
}

void	Contact::displayRow(int32_t	index)
{
	std::cout << SKY << "|" << RESET << std::to_string(index) << "." << SKY " |" << RESET;
	displayCell(_firstName);
	displayCell(_lastName);
	displayCell(_nickName);
	std::cout << std::endl;
}

void	Contact::displayWithSpaces(std::string prompt, std::string contactInfo)
{
	std::cout << "    | ";
	std::cout << std::left << std::setw(16) << prompt << std::left << std::setw(20) << contactInfo << "|" << std::endl;
}

void	Contact::ScrollingSecret(void)
{
	int32_t	len = _darkestSecret.size() - 20;
	for (size_t i = 0; len > 0 ; i++)
	{
		std::cout << "    | ";
		std::cout << std::setw(36) << std::left << _darkestSecret.substr(i * 36, 36) << std::setfill(' ')  << '|' << std::endl;
		len -= 36;
	}
}

void	Contact::displayFull(void)
{
	std::cout << "   _______________________________________" << std::endl;
	std::cout << "/ \\                                       \\" << std::endl;
	std::cout << "|   |                                     |" << std::endl;
	std::cout << " \\_ |                                     |" << std::endl;
	displayWithSpaces("First name: ", _firstName);
	displayWithSpaces("Last name: ", _lastName);
	displayWithSpaces("Nickname: ", _nickName);
	displayWithSpaces("Phonenumber: ", _phoneNumber);
	displayWithSpaces("Darkest secret: ", _darkestSecret.substr(0, 20));
	ScrollingSecret();
	std::cout << "    |   _____________________________________ " << std::endl;
    std::cout << "    |  /                                    /" << std::endl;
    std::cout << "    \\_/____________________________________/" << std::endl;
}

bool	Contact::invalid(void)
{
	std::cout << RED << "invalid!" << RESET << std::endl;
	return (false);
}

bool	Contact::verifyContactInfo(std::string contactInfo, int verification(int c), int32_t min_range, int32_t max_range)
{
	if (contactInfo.length() > max_range || contactInfo.length() < min_range)
		return (invalid());
	for (size_t i = 0; i < contactInfo.length(); i++)
	{
		if (!verification(contactInfo[i]))
			return (invalid());
	}
	return (true);
}

void	Contact::getLineCheck(std::string &contactInfo, std::string prompt, \
							int (*verification)(int c), int32_t min_range, int64_t max_range)
{
	if (std::cin.eof())
		throw(EofException());
	std::cout << GREEN << prompt << RESET;
	while (std::getline(std::cin, contactInfo))
	{
		if (std::cin && verifyContactInfo(contactInfo, verification, min_range, max_range))
			break;
		std::cout << GREEN << prompt << RESET;
	}
}

void	Contact::newContact(void)
{
	getLineCheck(_firstName, "Enter the first name: ", isalpha, 0, _firstName.max_size());
	getLineCheck(_lastName, "Enter the last name: ", isalpha, 0, _lastName.max_size());
	getLineCheck(_nickName, "Enter a nickname: ", isalpha, 0, _nickName.max_size());
	getLineCheck(_phoneNumber, "Enter the phone number: ", isdigit, 10, 10);
	getLineCheck(_darkestSecret, "Also enter their darkest deepest secret pls: ", \
													isalpha, 0, _darkestSecret.max_size());
}
