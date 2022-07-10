/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:18:28 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/10 14:42:26 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {

	private:
		std::string name;
		Weapon weapon;

	public:
		HumanB();
		HumanB(std::string name);
		HumanB(std::string name, Weapon weapon);
		void attack();
		void setWeapon(Weapon weapon);

};


#endif
