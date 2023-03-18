#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	std::string	function_names[4] = {"debug", "info", "warning", "error"};
	void	(Harl::*func_arr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (size_t i = 0; i < 4; i++)
	{
		if (function_names[i] == level)
			return ((this->*func_arr[i])());
	}
	std::cout << RED << "couldn't find that level" << RESET << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "This was a failure. I am making a note here, huge mess." << std::endl;
}

void	Harl::info(void)
{
	std::cout << "For your information, this much misbehaving is not acceptable." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I am warning you, you shall unleash the Karen if this continues!" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "THE KAREN HAS BEEN UNLEASHED. RUN AND HIDE YOUR FUCKING MANAGER!!" << std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{	
}
