/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:09:45 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/10 18:07:37 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info( void )
{
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning( void )
{
		std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error( void )
{
		std::cout << "[ ERROR] \n" << "This is unacceptable! I want to speak to the manager now.\n";
}

Harl::Harl()
{
	action[0].name = "DEBUG";
	action[0].action = &Harl::debug;
	action[1].name = "INFO";
	action[1].action = &Harl::info;
	action[2].name = "WARNING";
	action[2].action = &Harl::warning;
	action[3].name = "ERROR";
	action[3].action = &Harl::error;
}

void Harl::complain(std::string level)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (action[i].name == level)
		{
			(this->*action[i].action)();
			return ;
		}	
	}
	std::cout << "[ Probably complaining about insignificant problems ]\n";
	
}
