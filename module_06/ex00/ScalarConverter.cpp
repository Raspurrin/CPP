#include "ScalarConverter.hpp"

#define YELLOW	"\033[0;33m"
#define RED		"\033[0;31m"
#define RESET	"\033[0m"

std::string ScalarConverter::toBeConverted;
double ScalarConverter::convertedDouble;

void ScalarConverter::recognisingType(std::string str)
{
	ScalarConverter::toBeConverted = str;
	ScalarConverter::convertedDouble = atof(toBeConverted.c_str());

	std::cout << "Input string is: " << toBeConverted << std::endl;
	if (isPseudoType())
	{
		std::cout << "It's a pseudo type!" << std::endl;
		pseudoConverting();
		return;
	}
	else if (isCharType())
	{
		std::cout << "it's a char!" << std::endl;
		char letter = *toBeConverted.begin();
		convertedDouble = static_cast<int>(letter);
	}
	else if (isIntType())
		std::cout << "It's an int!" << std::endl;
	else if (isFloatType())
		std::cout << "it's a float!" << std::endl;
	else 
		throw NotRecognisedType();
	converting();
}

void	ScalarConverter::pseudoConverting()
{
	std::cout << RED << "char: impossible" << std::endl;
	std::cout << RED << "int: impossible" << std::endl;
	std::cout << YELLOW << "float: " << convertedDouble << "f" << std::endl;
	std::cout << YELLOW << "double: " << convertedDouble << std::endl;
}

void	ScalarConverter::converting()
{
	std::cout << "value of converted value: " << convertedDouble << std::endl;

	if (convertedDouble <= std::numeric_limits<float>::max())
		std::cout << "yes" << std::endl;
	if (convertedDouble > std::numeric_limits<float>::min())
		std::cout << "yessss" << std::endl;
	if (convertedDouble <= 127 && convertedDouble >= 33)
		std::cout << YELLOW << "char: " << static_cast<char>(convertedDouble) << std::endl;
	else if (convertedDouble <= 32 && convertedDouble >= 0)
		std::cout << RED << "char: Non displayable" << std::endl;
	else 
		std::cout << RED << "char: impossible" << std::endl;
	if (convertedDouble <= 2147483647 && convertedDouble >= -2147483648)
		std::cout << YELLOW << "int: " << static_cast<int>(convertedDouble) << std::endl;
	else
		std::cout << RED << "int: impossible" << std::endl;
	if (convertedDouble <= std::numeric_limits<float>::max() && \
			convertedDouble >= -std::numeric_limits<float>::max())
		std::cout << YELLOW << "float: " << static_cast<float>(convertedDouble) << std::endl;
	else
		std::cout << RED << "float: impossible" << std::endl;
	if (convertedDouble <= std::numeric_limits<double>::max() && \
			convertedDouble >= -std::numeric_limits<double>::max())
		std::cout << YELLOW << "double: " << static_cast<double>(convertedDouble) << RESET << std::endl;
	else 
		std::cout << RED << "double: impossible" << RESET << std::endl;
}

bool	ScalarConverter::isIntType()
{
	//std::cout << "in isInType()" << std::endl;
	if (toBeConverted.front() != '-' && toBeConverted.front() != '+' && !isdigit(toBeConverted.front()))
	{
		//std::cout << "checking in first loop: " << toBeConverted.front() << std::endl;
		return (false);
	}
	for (std::string::iterator it = toBeConverted.begin() + 1; it != toBeConverted.end(); it++)
	{
		//std::cout << "checking: " << *it << std::endl;
		if (!isdigit(*it))
			return (false);
	}
	return (true);
}

bool	ScalarConverter::isPseudoType()
{
	if (toBeConverted == "-inff" || toBeConverted == "+inff" || \
		toBeConverted == "nanf")
		return (true);
	return (false);
}

bool	ScalarConverter::isCharType()
{
	//std::cout << "in isCharType(). First char is: " << *toBeConverted.begin() << ", size is: " << toBeConverted.size() << ", is it printable: " << isprint(*toBeConverted.begin()) << std::endl;
	if (isalpha(*toBeConverted.begin()) && toBeConverted.size() == 1)
		return (true);
	return (false);
}

bool ScalarConverter::isFloatType()
{
	//std::cout << "is in float checking " << std::endl;
	size_t dotCount = 0;
	if (toBeConverted.front() != '-' && toBeConverted.front() != '+' && !isdigit(toBeConverted.front()))
		return (false);
	if (toBeConverted.back() != 'f')
	{
		std::cout << "no f at the end!" << std::endl;
		return (false);
	}
	for (std::string::iterator it = toBeConverted.begin() + 1; it != toBeConverted.end() - 1; it++)
	{
		//std::cout << "checking: " << *it << std::endl;
		if (*it == '.')
			dotCount++;
		else if (!isdigit(*it))
		{
			std::cout << "something is niether a digit or dot in float checking" << std::endl;
			return (false);
		}
	}
	if (dotCount != 1)
	{
		std::cout << "dotcount is not 1!" << std::endl;
		return (false);
	}
	return (true);
}

ScalarConverter::ScalarConverter(std::string toBeConverted)
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &ref)
{
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &ref)
{
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
}