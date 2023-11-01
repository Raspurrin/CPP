#include "ScalarConverter.hpp"

# define BLACK		"\033[0;30m"
# define RED		"\033[0;31m"
# define RESET		"\033[0m"

int	main(void)
{
	ScalarConverter scalarConverter();
	try
	{
		std::cout << BLACK << "----------------------\nAttempt 1:" << RESET << std::endl;
		ScalarConverter::recognisingType("sdfsdf");
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
	try
	{
		std::cout << BLACK << "----------------------\nAttempt 2:" << RESET << std::endl;
		ScalarConverter::recognisingType("-1");
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
	try
	{
		std::cout << BLACK << "----------------------\nAttempt 3:" << RESET << std::endl;
		ScalarConverter::recognisingType("-inff");
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
	try
	{
		std::cout << BLACK << "----------------------\nAttempt 4:" << RESET << std::endl;
		ScalarConverter::recognisingType("+553.53f");
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
	try
	{
		std::cout << BLACK << "----------------------\nAttempt 5:" << RESET << std::endl;
		ScalarConverter::recognisingType("h");
	}
	catch(const std::exception& e)
	{
		std::cerr  << RED << e.what() << RESET << '\n';
	}
	try
	{
		std::cout << BLACK << "----------------------\nAttempt 6:" << RESET << std::endl;
		ScalarConverter::recognisingType("2");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
