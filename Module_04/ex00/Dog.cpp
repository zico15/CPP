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

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor!" << std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog type: ("<< type << ") destructor!" << std::endl;
}

Dog &Dog::operator=(const Dog &a)
{
	this->type = a.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog makeSound!" << std::endl;
}

