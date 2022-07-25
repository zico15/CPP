/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:08:22 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/22 21:34:19 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor was called" << std::endl;
	this->name = "NULL";
	this->health = 100;
	this->healthMax = 100;
	this->energy = 50;
	this->attack_p = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap " << name << " was created" << std::endl;
	this->name = name;
	this->health = 100;
	this->healthMax = 100;
	this->energy = 50;
	this->attack_p = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
	std::cout << "ScavTrap is now a copy of " << scavtrap.name << std::endl;
	*this = scavtrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "("<< getName() << ") ScavTrap destructor was called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gatekeeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	
	if (health <= 0)
			std::cout << "ScavTrap not life of ("<< getName() << ") "<< std::endl;
	else if (energy > 0)
	{
		std::cout << "ScavTrap: " << name;
		std::cout << " attacks: " << target;
		std::cout << " points of damage: " << attack_p << std::endl;
		energy--;
	}
	else
		std::cout << "("<< getName() << ") " << "not energy!\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
	this->name = scavtrap.name;
	this->health = scavtrap.health;
	this->healthMax = scavtrap.healthMax;
	this->energy = scavtrap.energy;
	this->attack_p = scavtrap.attack_p;
	return *this;
}
