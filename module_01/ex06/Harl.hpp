#ifndef HARL_HPP

# include <iostream>
# include <fstream>
# include <stdint.h>

# define RESET		"\033[0m"
# define RED		"\033[0;31m"

class Harl
{
	private:
		static std::string	function_names[4];
		void			(*func_arr[4])();

	public:
		void	filter(std::string level);
		void	complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		Harl();
		~Harl();
};

#endif
