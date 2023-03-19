#include "replace.hpp"

void	replace(std::ifstream &infile, std::string infile_name, std::string toreplace, std::string replacement)
{
	std::ofstream	outfile(infile_name.append(".replace"));
	std::string		new_string;

	while (getline(infile, new_string))
	{
		for (size_t i = 0; (i = new_string.find(toreplace, i)) != new_string.npos;)
		{
			new_string.replace(i, toreplace.size(), replacement);
			i += replacement.size();
		}
		outfile << new_string << std::endl;
	}
}

// if stream no has copy constructor, so you cannot pass it by value
// because if you pass something by value as argument to another function,
// you are creating a new instance of the object with it's copy constructor.
int32_t	main(int32_t argc, char **argv)
{
	std::ifstream	infile;
	std::string		infile_name;

	if (argc != 4)
		return (std::cout << "You must provide 3 arguments: a filename and two strings" << std::endl, 0);
	infile.open(argv[1], std::ios::in);
	if (!infile)
		return(std::cout << "You used a wrong filename" << std::endl, 0);
	replace(infile, argv[1], argv[2], argv[3]);
	infile.close();
	return (0);
}
