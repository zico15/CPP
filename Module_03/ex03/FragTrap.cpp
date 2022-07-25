/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:13:16 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/24 14:23:12 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor was called" << std::endl;
	this->name = "NULL";
	this->health = 100;
	this->healthMax = 100;
	this->energy = 100;
	this->attack_p = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap " << name << " was created" << std::endl;
	this->name = name;
	this->health = 100;
	this->healthMax = 100;
	this->energy = 100;
	this->attack_p = 30;
}

FragTrap::FragTrap(const FragTrap &s)
{
	std::cout << "FragTrap is now a copy of " << s.name << std::endl;
	*this = s;
}

FragTrap::~FragTrap()
{
	std::cout << "("<< getName() << ") FragTrap destructor was called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	
	if (health <= 0)
			std::cout << "FragTrap not life of ("<< getName() << ") "<< std::endl;
	else if (energy > 0)
	{
		std::cout << "FragTrap: ( " << name;
		std::cout << " ) attacks: " << target;
		std::cout << " points of damage: " << attack_p << std::endl;
		energy--;
	}
	else
		std::cout << "FragTrap ( "<< getName() << " ) " << "not energy!\n";
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap ( " << name << " ) High Fives Guys!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &s)
{
	this->name = s.name;
	this->health = s.health;
	this->healthMax = s.healthMax;
	this->energy = s.energy;
	this->attack_p = s.attack_p;
	return *this;
}
