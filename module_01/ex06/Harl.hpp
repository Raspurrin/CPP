#ifndef HARL_HPP

# include <iostream>
# include <fstream>
# include <stdint.h>

class Harl
{
	private:
	static const std::string	function_names[4];
	static const void	(*Harl::func_arr[4])();

	public:
		void	filter(std::string level);
		void	complain(std::string level);
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
