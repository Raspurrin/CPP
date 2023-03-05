#include "Bureaucrat.hpp"

int32_t	main(void)
{
	Bureaucrat goiom(150);

	std::cout << "grade: " << goiom.getGrade() << std::endl;
	try
	{
		try
		{
			goiom.getGrade();
			goiom.decGrade();
		}
		catch(Bureaucrat::BaseException)
		{
			std::cerr << "dun fucked up" << std::endl;
			throw;
		}
	}
	catch(Bureaucrat::GradeTooLowException a)
	{
		std::cerr << a.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException)
	{
		std::cerr << "we did rethrow, but your grade high as snow" << std::endl;
	}
	return (0);
}
