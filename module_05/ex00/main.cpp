#include "Bureaucrat.hpp"

int32_t	main(void)
{
	Bureaucrat goiom(150);

	try
	{
		goiom.incGrade();
	}
	catch(const std::exception::GradeTooHighException e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
