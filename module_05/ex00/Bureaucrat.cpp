#include "Bureaucrat.hpp"

// std::string	getName()
// {
// 	return (name);
// }

int32_t		Bureaucrat::getGrade()
{
	return (grade);
}

void		Bureaucrat::incGrade()
{
	if (grade + 1 > 150)
		throw (const std::exception);
}

// void		decGrade()
// {
// 	try
// 	{

// 	}
// }

Bureaucrat::Bureaucrat(int32_t grade)
{
	std::cout << ON_YELLOW << "Bureaucrat's constructor with int32_t arg is called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(void)
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
