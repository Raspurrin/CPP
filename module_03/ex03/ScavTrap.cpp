#include "ScavTrap.hpp"
#include "colour.hpp"
#include <random>

static std::string	rand_guard_msg(void);

void	ScavTrap::guardGate(void)
{
	std:: cout << PINK << rand_guard_msg() << std::endl;
	std::cout << PINK << _name << " is now in gatekeeper mode" << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (!check_energy())
		return;
	std::cout << RED << "ScavTrap attack!" << std::endl;
	std::cout << RED << this->_name << " attacked " << target << " and " << target << " lost " << _attackDmg << " HP" << RESET << std::endl;
	std::cout << YELLOW << this->_name << " has " << _hitPoints << " HP and " << _energyPoints << " energy left" << RESET << std::endl;
}

ScavTrap::ScavTrap(void)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_initEnergyPoints = 50;
	_attackDmg = 20;
	_maxPoints = 100;
	_name = "scavtrap";
	std::cout << "Scavtrap: hitpoints: " << _hitPoints << " energy: " << _energyPoints << " attack dmg: " << _attackDmg << std::endl;
	std::cout << ON_YELLOW << _name << "'s constructor is called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDmg = 20;
	_maxPoints = 100;
	std::cout << SKY << _name << "'s constructor is called. Default HP: " << _hitPoints << RESET << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << SKY << _name << "'s destructor is called" << RESET << std::endl;
}

static std::string	rand_guard_msg(void)
{
	static std::mt19937 mt(time(0));
	static const std::string msg[] = {
		"Yup! Guarding gates is the new hotness!",
		"Guarding gates is FUN!",
		"Someone's gonna come up to me and be all like:\n"
		"Hey, you're awesome at gate guarding! Wanna come guard OUR gate and be our friend?\n"
		"And I'll be, like, sure! This one's all guarded-out anyway!"};

	return ((std::string)msg[mt() % 3]);
}
