/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:18:17 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/10 14:42:29 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {

	private:
		std::string name;
		Weapon weapon;

	public:
		HumanA();
		HumanA(std::string name);
		HumanA(std::string name, Weapon weapon);
		void attack();
		void setWeapon(Weapon weapon);

};


#endif
