/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 20:56:09 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/13 14:23:38 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <chrono>

	int	Account::_nbAccounts = 0;
	int	Account::_totalAmount = 0;
	int	Account::_totalNbDeposits = 0;
	int	Account::_totalNbWithdrawals = 0;

	void	Account::_displayTimestamp( void )
	{
		
		std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
		std::time_t time_now = std::chrono::system_clock::to_time_t(now);
	
		tm utc_tm = *localtime(&time_now);
		std::cout << std::setfill('0') << "[" << (utc_tm.tm_year + 1900)
			<< std::setw(2) << utc_tm.tm_mon
			<< std::setw(2) << utc_tm.tm_mday << "_"
			<< std::setw(2) << utc_tm.tm_hour
			<< std::setw(2) << utc_tm.tm_min
			<< std::setw(2) << utc_tm.tm_sec << "] ";
	}

	int	Account::getNbAccounts( void )
	{
		return (Account::_nbAccounts);
	}
	
	int	Account::getTotalAmount( void )
	{
		return (Account::_totalAmount);
	}
	
	int	Account::getNbDeposits( void )
	{
		return (Account::_totalNbDeposits);
	}
	
	int	Account::getNbWithdrawals( void )
	{
		return (Account::_totalNbWithdrawals);
	}

	void	Account::displayAccountsInfos( void )
	{
		Account::_displayTimestamp();
		std::cout << "accounts:" << getNbAccounts() << ";";
		std::cout << "total:" << getTotalAmount() << ";";
		std::cout << "deposits:" << getNbDeposits() << ";";
		std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
	}

	Account::Account()
	{
		
	}

	Account::Account( int initial_deposit )
	{
		this->_accountIndex = Account::_nbAccounts++;
		this->_amount = initial_deposit;
		Account::_totalAmount += this->_amount;
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "created:" << std::endl;
	}

	Account::~Account( void )
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "closed:" << std::endl;
	}

	void	Account::makeDeposit( int deposit )
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" <<  this->_amount << ";";
		std::cout << "deposit:" << deposit << ";";
		this->_amount += deposit;
		Account::_nbDeposits++;
		Account::_totalAmount += this->_amount;
		Account::_totalNbDeposits++;
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	}

	bool	Account::makeWithdrawal( int withdrawal )
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" <<  this->_amount << ";";
		if (withdrawal > this->_amount )
		{
			std::cout << "withdrawal:refused" << std::endl;
			return (false);
		}
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		Account::_totalAmount -= this->_amount;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}

	int		Account::checkAmount( void ) const
	{
		return (_amount > 0);
	}

	void	Account::displayStatus( void ) const 
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "deposits:" << this->_nbDeposits << ";";
		std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
	}
