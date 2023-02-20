#include "replace.hpp"

std::string file_to_str(std::ifstream &path)
{
	std::ifstream	file(path);
	return (std::string((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>()));
}

void	replace(std::ifstream &infile, char *toreplace, char *replacement)
{
	std::fstream	outfile;

	std::string str = file_to_str(infile);
	while (str.find != std::string::npos)
	outfile.open("outfile", std::ios::out);
}

// if stream no has copy constructor, so you cannot pass it by value
// because if you pass something by value as argument to another function,
// you are creating a new instance of the object with it's copy constructor.
int32_t	main(int32_t argc, char **argv)
{
	std::ifstream	infile;

	if (argc != 4)
		return (std::cout << "You must provide 3 argumemts: a filename and two strings" << std::endl, 0);
	infile.open(argv[1], std::ios::in);
	if (!infile)
		return(std::cout << "You used a wrong filename" << std::endl, 0);
	replace(infile, argv[2], argv[3]);
	infile.close();
	return (0);
}
