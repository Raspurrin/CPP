#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <stdint.h>
# include <iomanip>

# define RESET		"\033[0m"
# define BLACK		"\033[0;30m"
# define RED		"\033[0;31m"
# define GREEN		"\033[0;32m"
# define YELLOW		"\033[0;33m"
# define PURPLE		"\033[0;34m"
# define PINK		"\033[0;35m"
# define SKY		"\033[0;36m"
# define SCROLL		YELLOW
# define PROMPT		BLACK		

int	isascii_space(int c);

class EofException : public std::exception
{
};

class Contact
{
	private:
			std::string	_firstName;
			std::string	_lastName;
			std::string	_nickName;
			std::string	_phoneNumber;
			std::string	_darkestSecret;

	private:
		bool	invalid(void);
		void	displayWithSpaces(std::string prompt, std::string contactInfo);
		void	scrollingText(std::string prompt, std::string contactInfo);
		bool	verifyContactInfo(std::string str, int verification(int c), \
									int32_t min_range, int32_t max_range);

	public:
		void	newContact(void);
		void	getLineCheck(std::string &contactInfo, std::string msg, \
							int (*verification)(int c), size_t min_range, int64_t max_range);
		void	displayFull(void);
		void	displayRow(int32_t	index);

	public:
		Contact();
};

#endif
