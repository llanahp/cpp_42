/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 08:39:24 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/20 08:39:25 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	std::cout << "[19920104_091532] ";
}

Account::Account(int initial_deposit)
{
	_nbAccounts++;
	_accountIndex = _nbAccounts -1;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	return ;
}

Account::~Account(void)
{
	_nbAccounts--;
	_totalAmount -= _amount;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
	return ;
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:"
		<< _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
	return ;
}

void Account::makeDeposit( int deposit )
{
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:"
		<< deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits + 1 << std::endl;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	return ;
}

bool Account::makeWithdrawal( int withdrawal )
{
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	std::cout << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:"
		<< _nbWithdrawals + 1 << std::endl;
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return true;
}

int Account::checkAmount( void ) const
{
	return _amount;
}

void Account::displayStatus( void ) const
{
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:"
		<< _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
	return ;
}
