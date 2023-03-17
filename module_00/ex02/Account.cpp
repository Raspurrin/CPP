#include "Account.hpp"

# define RESET		"\033[0m"
# define RED		"\033[0;31m"
# define GREEN		"\033[0;32m"
# define YELLOW		"\033[0;33m"
# define SKY		"\033[0;36m"

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	std::cout << SKY << "================ ACCOUNT INFOS ================" << std::endl;
	std::cout << "Amount of acounts: " << _nbAccounts << std::endl;
	std::cout << "Total amount across acounts: " << _totalAmount << std::endl;
	std::cout << "Total deposits across acounts: " << _totalNbDeposits << std::endl;
	std::cout << "Total withdrawals across acounts: " << _totalNbWithdrawals << std::endl;
	std::cout << "==============================================" << RESET << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	if (deposit <= 0)
	{
		std::cout << RED << "Bro. That's not depositing anything o-o" << RESET << std::endl;
		return;
	}
	std::cout << YELLOW << "Deposited " << deposit << " to account: " << _accountIndex << RESET << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits ++;
	_nbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (_amount - withdrawal < 0)
	{
		std::cout << RED << "You don't have that much stored on this account! " << "(Balance: " << _amount << " withdrawal request: " << withdrawal << ")" << RESET << std::endl;
		return (false);
	}
	std::cout << YELLOW << "Withdrew " << withdrawal << " from account: " << _accountIndex << RESET << std::endl;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	_nbWithdrawals++;
	return (true);
}

int		Account::checkAmount(void) const
{
	std::cout << "Amount is: " << _amount << std::endl;
	return (_amount);
}

void	Account::displayStatus(void) const
{
	std::cout << GREEN << "Status account " <<_accountIndex << ": ";
	std::cout << "Amount: " << _amount <<", deposits: " << _nbDeposits << ", withdrawals: " <<_nbWithdrawals << RESET << std::endl; 
}

void	Account::_displayTimestamp(void)
{
}

Account::Account(void) :
	_accountIndex(_nbAccounts),
	_amount(0),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_nbAccounts++;
}

Account::Account(int initial_deposit) :
	_accountIndex(_nbAccounts),
	_amount(0),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	if (initial_deposit > 0)
	{
		_amount += initial_deposit;
		_totalAmount += initial_deposit;
	}
	else
		_amount = 0;
	_nbAccounts++;
}

Account::~Account(void)
{
}
