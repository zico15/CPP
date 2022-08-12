/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:18:13 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/09 21:35:48 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{
}

HumanA::HumanA(std::string name)
{
	this->name = name;
}

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->name = name;
	this->weapon = weapon;
}

HumanA::~HumanA()
{
}


void HumanA::attack()
{
	std::cout << "Name: " << this->name << "Weapon: " << weapon.getType() << "\n";
}

void HumanA::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}

