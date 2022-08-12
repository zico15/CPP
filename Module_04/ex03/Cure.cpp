/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:58 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/11 14:42:51 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp" 

Cure::Cure()
{
    this->type  = "cure";
}

Cure::Cure(std::string const &type)
{
    this->type = type;
}

Cure &Cure::operator=(const Cure &amateria)
{
    this->type = amateria.type;
    return *this;
}

Cure::Cure(const Cure &amateria)
{
    *this = amateria;
    this->type  = "cure";
}

Cure::~Cure()
{
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria *Cure::clone(void) const
{ 
    return (new Cure(type));
}

