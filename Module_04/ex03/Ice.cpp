/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:58 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/11 14:41:30 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp" 

Ice::Ice()
{
    this->type = "ice";
}

Ice::Ice(std::string const &type)
{
    this->type = type;
}

Ice &Ice::operator=(const Ice &amateria)
{
    this->type = amateria.type;
    return *this;
}

Ice::Ice(const Ice &amateria)
{
    *this = amateria;
}

Ice::~Ice()
{

}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone(void) const
{ 
    return (new Ice(type));
}

