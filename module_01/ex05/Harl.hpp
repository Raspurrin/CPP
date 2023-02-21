#ifndef HARL_HPP

# include <iostream>
# include <fstream>
# include <stdint.h>

class Harl
{
	public:
		void	complain(std::string level);
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
