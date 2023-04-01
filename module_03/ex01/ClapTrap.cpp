#include "ClapTrap.hpp"
#include <random>

static std::string rand_heal_msg(void);
static std::string	rand_cri_msg(void);
static std::string	rand_attack_msg(void);

bool	ClapTrap::check_energy(void)
{
	if (_energyPoints != 0)
	{
		_energyPoints--;
		return (true);
	}
	std::cout << RED << "not enough energy!" << std::endl;
	std::cout << YELLOW << _name << " has " << _hitPoints << " HP and " << _energyPoints << " energy left" << RESET << std::endl;
	return (false);
}

void ClapTrap::attack(const std::string& target)
{
	if (!check_energy())
		return;
	std::cout << RED << rand_attack_msg() << std::endl;
	std::cout << RED << "claptrap attacked " << target << " and " << target << " lost " << _attackDmg << " HP" << RESET << std::endl;
	std::cout << YELLOW << _name << " has " << _hitPoints << " HP and " << _energyPoints << " energy left" << RESET << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints - (signed int)amount <= 0)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << RED << rand_cri_msg() << std::endl;
	std::cout << RED << _name << " took " << amount << " dmg" << RESET << std::endl;
	std::cout << YELLOW << _name << " has " << _hitPoints << " HP and " << _energyPoints << " energy left" << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!check_energy())
		return;
	if (_hitPoints + amount >= _maxPoints)
		amount = _maxPoints - _hitPoints;
	_hitPoints += amount;
	std::cout << GREEN << rand_heal_msg() << std::endl;
	std::cout << GREEN << _name << "  repaired itself and gained " << amount << " HP" << RESET << std::endl;
	std::cout << YELLOW << _name << " has " << _hitPoints << " HP and " << _energyPoints << " energy left" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	_hitPoints(10), \
	_energyPoints(10), \
	_attackDmg(10), \
	_maxPoints(10)
{
	_name = name;
	std::cout << SKY << _name << "'s constructor is called. Default HP: " << _hitPoints << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs) : 
	_hitPoints(rhs._hitPoints), \
	_energyPoints(rhs._energyPoints), \
	_attackDmg(rhs._attackDmg), \
	_maxPoints(rhs._maxPoints)
{
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDmg = rhs._attackDmg;
	this->_maxPoints = rhs._maxPoints;
	return (*this);
}

ClapTrap::ClapTrap(void)
{
	std::cout << SKY << "ClapTrap's default constructor is called" << RESET << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << SKY << _name << "'s destructor is called" << RESET << std::endl;
}

static std::string rand_heal_msg(void)
{
	static std::mt19937 mt(time(0));
	static const std::string msg[] = {
		"Hahaha... I ascend!",
		"Ha ha ha! I LIVE! Hahaha!",
		"Hahahahaha! I'm alive!",
		"Good, I didn't want any spare parts!",
		"Wow, that actually worked?",
		"You can't keep a good 'bot down!",
		"I'm back! Woo!",
		"Holy crap, that worked?",
		"Better lucky than good!",
		"Back for more!",
		"Here we go again!"};

	return ((std::string)msg[mt() % 11]);
}

static std::string	rand_cri_msg(void)
{
	static std::mt19937 mt(time(0));
	static const std::string msg[] = {
		"I'll stop talking when I'm dead!",
		"I'll die the way I lived: annoying!",
		"Come back here! I'll gnaw your legs off!",
		"This could've gone better!",
		"You look like something a skag barfed up!",
		"What's that smell? Oh wait, it's just you!",
		"Yo momma's so dumb, she couldn't think of a good ending for this 'yo momma' joke!",
		"You're one screw short of a screw!",
		"I bet your mom could do better!",
		"You look like something a skag barfed up!",
		"Oh yeah? Well, uh... yeah.",
		"What is that smell? Oh, never mind... it's just you!",
		"I'm leaking!",
		"Good thing I don't have a soul!",
		"Aww!",
		"Aww! Come on!",
		"You can't kill me!",
		"I'm too pretty to die!",
		"Crap!",
		"Robot down!",
		"No, nononono NO!",
		"I'll never go back to the bad place!",
		"I have many regrets!"};

	return ((std::string)msg[mt() % 22]);
}

static std::string	rand_attack_msg(void)
{
	static std::mt19937 mt(time(0));
	static const std::string msg[] = {
		"Step right up, to the Bulletnator 9000!",
		"I am a tornado of death and bullets!",
		"Stop me before I kill again, except don't!",
		"Hehehehe, mwaa ha ha ha, MWAA HA HA HA!",
		"I'm on a roll!",
		"Unts unts unts unts!",
		"Ha ha ha! Fall before your robot overlord!",
		"Can't touch this!",
		"Ha! Keep 'em coming!",
		"There is no way this ends badly!",
		"This is why I was built!"};

	return ((std::string)msg[mt() % 11]);
}
