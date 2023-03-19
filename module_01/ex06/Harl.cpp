#include "Harl.hpp"

std::string Harl::function_names[] = {"debug", "info", "warning", "error"};

void	Harl::complain(std::string level)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (function_names[i] == level)
			return ((this->*func_arr[i])());
	}
	std::cout << "couldn't find that level" << std::endl;
}

void	Harl::filter(std::string level)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->function_names[i] == level)
		{
			switch (i)
			{
				case (0) :
					this->debug();
				case (1) :
					this->info();
				case (2) :
					this->warning();
				case (3) :
					this->error();
					return;
			}
		}
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
	func_arr[0] = &Harl::debug;
	func_arr[1] = &Harl::info;
	func_arr[2] = &Harl::warning;
	func_arr[3] = &Harl::error;
}

Harl::~Harl()
{	
}
