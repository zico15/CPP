/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:18:21 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/10 14:41:29 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
}


HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::HumanB(std::string name, Weapon weapon)
{
	this->name = name;
	this->weapon = weapon;
}

void HumanB::attack()
{
	std::cout << "Name: " << this->name << "Weapon: " << weapon.getType() << "\n";
}

void HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}
