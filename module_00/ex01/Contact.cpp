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
	std::cout << SKY << "|" << RESET << std::to_string((index % 8) + 1) << "." << SKY " |" << RESET;
	displayCell(_firstName);
	displayCell(_lastName);
	displayCell(_nickName);
	std::cout << std::endl;
}

void	Contact::displayWithSpaces(std::string prompt, std::string contactInfo)
{
	std::cout << SCROLL << "    | " << PROMPT;
	std::cout << std::left << std::setw(16) << prompt;
	std::cout << RESET << std::left << std::setw(20) << contactInfo << SCROLL << "|" << RESET << std::endl;
}

void	Contact::scrollingText(std::string prompt, std::string contactInfo)
{
	displayWithSpaces(prompt, contactInfo.substr(0, 20));
	int32_t	len = contactInfo.size() - 20;
	for (size_t i = 0; len > 0 ; i++)
	{
		std::cout << SCROLL << "    | " << RESET;
		std::cout << std::setw(36) << std::left << contactInfo.substr(i * 36, 36) << std::setfill(' ') << SCROLL << '|' << std::endl;
		len -= 36;
	}
}

void	Contact::displayFull(void)
{
	std::cout << SCROLL << "   _______________________________________" << std::endl;
	std::cout << "/ \\                                       \\" << std::endl;
	std::cout << "|   |                                     |" << std::endl;
	std::cout << " \\_ |                                     |" << std::endl;
	scrollingText("First name: ", _firstName);
	scrollingText("Last name: ", _lastName);
	scrollingText("Nickname: ", _nickName);
	scrollingText("Phonenumber: ", _phoneNumber);
	scrollingText("Darkest secret: ", _darkestSecret);
	std::cout << SCROLL << "    |   _____________________________________ " << std::endl;
    std::cout << "    |  /                                    /" << std::endl;
    std::cout << "    \\_/____________________________________/" << RESET << std::endl;
}

bool	Contact::invalid(void)
{
	std::cout << RED << "invalid!" << RESET << std::endl;
	return (false);
}

bool	Contact::verifyContactInfo(std::string contactInfo, int verification(int c), \
												int32_t min_range, int32_t max_range)
{
	if (contactInfo.length() > (size_t)max_range || contactInfo.length() < (size_t)min_range)
		return (invalid());
	for (size_t i = 0; i < contactInfo.length(); i++)
	{
		if (!verification(contactInfo[i]))
			return (invalid());
	}
	return (true);
}

void	Contact::getLineCheck(std::string &contactInfo, std::string prompt, \
							int (*verification)(int c), size_t min_range, int64_t max_range)
{
	if (std::cin.eof())
		throw(EofException());
	std::cout << GREEN << prompt << RESET;
	while (std::getline(std::cin, contactInfo))
	{
		if (!contactInfo.empty() && verifyContactInfo(contactInfo, verification, min_range, max_range))
			break;
		std::cout << GREEN << prompt << RESET;
	}
}

void	Contact::newContact(void)
{
	getLineCheck(_firstName, "Enter the first name: ", isalpha, 0, _firstName.max_size());
	getLineCheck(_lastName, "Enter the last name: ", isalpha, 0, _lastName.max_size());
	getLineCheck(_nickName, "Enter a nickname: ", isalpha, 0, _nickName.max_size());
	getLineCheck(_phoneNumber, "Enter the phone number: ", isdigit, 0, 10);
	getLineCheck(_darkestSecret, "Also enter their darkest deepest secret pls: ", \
													isascii_space, 0, _darkestSecret.max_size());
}

Contact::Contact()
{
}
