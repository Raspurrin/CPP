#include "FragTrap.hpp"
#include <random>

static std::string	rand_highfive_msg(void);

void	FragTrap::highFivesGuys(void)
{
	std::cout << PINK << rand_highfive_msg() << RESET << std::endl;
}

FragTrap::FragTrap(void)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDmg = 30;
	_initDmg = 30;
	_maxPoints = 100;
	_name = "fragtrap";
	std::cout << "FragTrap: hitpoints: " << _hitPoints << "energy: " << _energyPoints << " attack dmg: " << _attackDmg << std::endl;
	std::cout << ON_PINK << _name << "'s constructor is called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string _name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDmg = 30;
	_maxPoints = 100;
	_name = _name;
	std::cout << SKY << _name << "'s constructor is called. Default HP: " << _hitPoints << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &rhs)
{
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDmg = rhs._attackDmg;
	_maxPoints = rhs._maxPoints;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDmg = rhs._attackDmg;
	_maxPoints = rhs._maxPoints;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << SKY << _name << "'s destructor is called" << RESET << std::endl;
}

static std::string	rand_highfive_msg(void)
{
	static std::mt19937 mt(time(0));
	static const std::string msg[] = {
		"Secret handshake!",
		"Up top!",
		"Gimme five!",
		"High five!",
		"Up top!"};

	return ((std::string)msg[mt() % 5]);
}
