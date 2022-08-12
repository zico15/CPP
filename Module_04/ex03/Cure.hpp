/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:55 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/11 14:42:47 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure: public AMateria {

    public:
        Cure();
        Cure(std::string const & type);
        Cure &operator=(const Cure &amateria);
        Cure(const Cure &amateria);
        AMateria* clone() const;
        void use(ICharacter& target);
        virtual ~Cure();
};


#endif
