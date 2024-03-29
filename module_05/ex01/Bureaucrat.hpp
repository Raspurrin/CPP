#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <stdint.h>
#include <iostream>

# define ON_YELLOW	"\033[43m"
# define RESET		"\033[0m"



class Bureaucrat
{
	private:
		const std::string	name;
		int32_t				grade;

	public:
		std::string	getName() const;
		int32_t		getGrade() const;
		void		incGrade();
		void		decGrade();
		void		signForm();

	class BaseException : public std:: exception {};
	class GradeTooHighException : public BaseException
	{
	};

	class GradeTooLowException : public BaseException
	{
		public:
			const char *what() const throw();
	};

	public:
		Bureaucrat(void);
		Bureaucrat(int32_t grade);
		Bureaucrat(const Bureaucrat &rhs);
		Bureaucrat &operator=(const Bureaucrat &rhs);
		~Bureaucrat(void);
};

#endif
