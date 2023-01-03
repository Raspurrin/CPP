#include <iostream>

int main(int argc, char const *argv[])
{
	std::string name;

	std::cout << "give your full name: ";
	std::getline (std::cin, name);
	std::cout << "and now something";
  	std::cout << "Hello, " << name;
	return 0;
}
