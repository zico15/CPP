/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:55 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/22 21:09:01 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria {
protected:
    std::string type;
public:
    AMateria();
    AMateria(std::string const & type);
    std::string const &getType() const; //Returns the materia type
    AMateria &operator=(const AMateria &amateria);
    AMateria(const AMateria &amateria);
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    virtual ~AMateria();
};


#endif
