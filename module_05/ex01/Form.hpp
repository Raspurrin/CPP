#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	class BaseException : public std:: exception {};
	class GradeTooHighException : public BaseException
	{
	};

	class GradeTooLowException : public BaseException
	{
	};

	private:
		std::string	_name;
		int 		_gradeToSign;
		int 		_gradeToExecute;
		bool 		_isSigned;


	public: 
		std::string	getName() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		bool		getIsSigned() const;

	public:
		void		beSigned(Bureaucrat& bureaucrat);

    public:
        Form();
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();
};

std::ostream& operator<<(std::ostream& out, const Form& form)
{
	out << "Form name: " << form.getName() << std::endl;
	out << "Form grade to sign: " << form.getGradeToSign() << std::endl;
	out << "Form grade to execute: " << form.getGradeToExecute() << std::endl;
	out << "Form is signed: " << form.getIsSigned() << std::endl;
	return (out);
}