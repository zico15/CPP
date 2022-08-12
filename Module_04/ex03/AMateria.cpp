/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:58 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/11 14:24:52 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp" 

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
}

AMateria &AMateria::operator=(const AMateria &amateria)
{

    this->type = amateria.type;
    return *this;
}

AMateria::AMateria(const AMateria &amateria)
{
    *this = amateria;
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "No Materia specified to use against " << target.getName() << std::endl;
}