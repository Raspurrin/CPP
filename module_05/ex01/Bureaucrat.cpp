#include "Bureaucrat.hpp"

// idk how else to convert string to const char * and then return 
// a heap allocated address! It complained about being on the stack '-'

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("we did rethrow, but your grade too low");
}

Bureaucrat::Bureaucrat(int32_t grade) :
	name("moustache"),
	grade(grade)
{
	if (grade > 150 || grade < 1)
	{
		std::cout << getName() << " ";
		if (grade > 150)
			throw (Bureaucrat::GradeTooLowException());
		else if (grade < 1)
			throw (Bureaucrat::GradeTooHighException());
	}
	std::cout << ON_YELLOW << "Bureaucrat's constructor with int32_t arg is called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(void) :
	name("moustache"),
	grade(0)
{
	std::cout << ON_YELLOW << "Bureaucrat's default constructor is called" << RESET << std::endl;
}

void		Bureaucrat::decGrade()
{
	if (grade + 1 > 150)
	{
		std::cout << getName() << " ";
		throw (Bureaucrat::GradeTooLowException());
		return;
	}
	grade++;
}

void		Bureaucrat::incGrade()
{
	if (grade - 1 < 1)
	{
		std::cout << getName() << " ";
		throw (Bureaucrat::GradeTooHighException());
		return;
	}
	grade--;
}

void		Bureaucrat::signForm()
{
	std::cout << getName() << " ";
	if (grade > 150)
		std::cout << name << "couldn't sign form because grade is too low" << std::endl;
	else if (grade < 1)
		std::cout << name << "couldn't sign form because grade is too high" << std::endl;
	else
		std::cout << name << "signed form" << std::endl;
}

std::string	Bureaucrat::getName() const
{
	return (name);
}

int32_t		Bureaucrat::getGrade() const
{
	return (grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) :
	grade(rhs.getGrade())
{
	std::cout << ON_YELLOW << "Bureaucrat's copy constructor is called" <<  std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	grade = rhs.getGrade();
	std::cout << ON_YELLOW << "Bureaucrat's assignment operator is called" << RESET << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << ON_YELLOW << "Bureaucrat's destructor is called" << RESET << std::endl;
}
