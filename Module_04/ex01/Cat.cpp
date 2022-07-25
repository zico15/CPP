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

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor!" << std::endl;
	type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat type: ("<< type << ") destructor!" << std::endl;
}

Cat &Cat::operator=(const Cat &a)
{
	this->type = a.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat makeSound!" << std::endl;
}

