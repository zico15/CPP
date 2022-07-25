/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:58 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/22 21:01:32 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor was called" << std::endl;
	this->name = "NULL";
	this->health = 10;
	this->energy = 10;
	this->attack_p = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap " << name << " was created" << std::endl;
	this->name = name;
	this->health = 10;
	this->healthMax = 10;
	this->energy = 10;
	this->attack_p = 0;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	*this = claptrap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "("<< getName() << ") Default destructor was called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	this->name = claptrap.name;
	this->health = claptrap.health;
	this->energy = claptrap.energy;
	this->attack_p = claptrap.attack_p;
	return *this;
}

std::string ClapTrap::getName()
{
	return (name);
}

void ClapTrap::setAttackPoint(int attack_p)
{
	this->attack_p = attack_p;
	
}

void ClapTrap::attack(const std::string& target)
{
	
	if (health <= 0)
			std::cout << " not life of ("<< getName() << ") "<< std::endl;
	else if (energy > 0)
	{
		std::cout << "ClapTrap: " << name;
		std::cout << " attacks: " << target;
		std::cout << " points of damage: " << attack_p << std::endl;
		energy--;
	}
	else
		std::cout << "("<< getName() << ") " << "not energy!\n";
}

void		ClapTrap::takeDamage( unsigned int amount )
{

	if (amount > 0)
	{
		health = (health - amount) * health >= amount; 
		std::cout << "("<< getName() << ") " << "takeDamage: " << amount;
		std::cout << " health " << this->health << std::endl;
	}
	if (health <= 0)
		std::cout << " not life of ("<< getName() << ") "<< std::endl;
}
void		ClapTrap::beRepaired( unsigned int amount )
{
	this->health += amount;
	if (this->health > this->healthMax)
	{
		this->health = this->healthMax;
		(std::cout << "You can't heal more than your max!" << std::endl);
	}
	std::cout << "("<< getName() << ") " << "health: " << health << std::endl;
}

