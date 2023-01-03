#include <iostream>
#include <stdint.h>
#include <cctype>

void	str_to_upper(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (isalpha(str[i]))
			str[i] = (char)std::toupper(str[i]);
		std::cout << str[i++];
	}
}

int32_t main(int argc, char *argv[])
{
	size_t	i;

	i = 1;
	if (argc < 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	while (argv[i])
		str_to_upper(argv[i++]);
	std::cout << std::endl;
	return (0);
}
