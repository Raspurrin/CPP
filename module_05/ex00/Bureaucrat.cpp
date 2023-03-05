#include "Bureaucrat.hpp"

// idk how else to convert string to const char * and then return 
// a heap allocated address! It complained about being on the stack '-'

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("we did rethrow, but your grade too low");
}

std::string	Bureaucrat::getName()
{
	return (name);
}

int32_t		Bureaucrat::getGrade()
{
	return (grade);
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

Bureaucrat::Bureaucrat(int32_t grade) :
	grade(grade),
	name("moustache")
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
	grade(0),
	name("moustache")
{
	std::cout << ON_YELLOW << "Bureaucrat's default constructor is called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
{
	std::cout << ON_YELLOW << "Bureaucrat's copy constructor is called" <<  std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	std::cout << ON_YELLOW << "Bureaucrat's assignment operator is called" << RESET << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << ON_YELLOW << "Bureaucrat's destructor is called" << RESET << std::endl;
}
