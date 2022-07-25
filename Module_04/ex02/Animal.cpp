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

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor!" << std::endl;
	type = "Animal";
}

Animal::~Animal()
{
	std::cout << "Animal type: ("<< type << ") destructor!" << std::endl;
}

Animal &Animal::operator=(const Animal &a)
{

	type = a.getType();
	return *this;
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "Animal makeSound!" << std::endl;
}
