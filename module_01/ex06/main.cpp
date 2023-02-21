#include "Harl.hpp"

int32_t	main(int32_t argc, char **argv)
{
	Harl grum;
	if (argc != 2)
		return (std::cout << "Harlfilter only runs with one argument" << std::endl, 0);
	grum.filter(argv[1]);
	return (0);
}
