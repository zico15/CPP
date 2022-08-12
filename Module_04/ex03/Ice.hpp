/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:55 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/11 14:42:29 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice: public AMateria {

    public:
        Ice();
        Ice(std::string const & type);
        Ice &operator=(const Ice &amateria);
        ~Ice();
        Ice(const Ice &amateria);
        AMateria* clone() const;
        void use(ICharacter& target);
      
};


#endif
