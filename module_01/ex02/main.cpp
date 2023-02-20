#include <iostream>
#include <stdint.h>

int32_t	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*strPtr = &str;
	std::string &strRef = str;

	std::cout << "Memory address of str: \t\t\t" << &str << std::endl;
	std::cout << "Memory address held by stringPtr: \t" << strPtr << std::endl;
	std::cout << "Memory address held by strRef: \t\t" << &strRef << std::endl;
	std::cout << "Value of str: \t\t\t\t" << str << std::endl;
	std::cout << "Value pointed to by strPtr: \t\t" << *strPtr << std::endl;
	std::cout << "Value pointed to by strRef \t\t" << strRef << std::endl;
	return (0);
}
