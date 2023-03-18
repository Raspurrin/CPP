#include <iostream>
#include <stdint.h>
#include <cctype>

void	str_upper(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
		str[i] = std::toupper(str[i]);
	std::cout << str;
}

int32_t main(int argc, char *argv[])
{
	size_t	i;

	i = 1;
	if (argc < 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	while (argv[i])
		str_upper(argv[i++]);
	std::cout << std::endl;
	return (0);
}
