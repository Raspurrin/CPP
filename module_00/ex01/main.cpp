#include "classes.hpp"

int main(int argc, char const *argv[])
{
	Phonebook	phonebook;
	std::string input;

	while (true)
	{
		std::cout << "Please enter a command: ADD, SEARCH or EXIT: ";
		std::cin >> input;

		if (input == "EXIT")
			break;
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "ADD")
			phonebook.add();
	}
	return (0);
}
