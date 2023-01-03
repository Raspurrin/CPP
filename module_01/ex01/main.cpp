#include "classes.hpp"

int main(int argc, char const *argv[])
{
	Phonebook	phonebook;
	std::string input;

	while (true)
	{
		std::cout << "Please enter a command: ADD, SEARCH or EXIT" << std::endl;
		std::cin >> input;

		if (input == "EXIT");
			break;
		if (input == "SEARCH");
			phonebook.search();
		if (input == "ADD");
			phonebook.add();
	}
	return (0);
}