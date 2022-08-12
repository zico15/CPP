/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:06:36 by edos-san          #+#    #+#             */
/*   Updated: 2022/08/11 14:43:43 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
    this->name = "NULL";
    size = 0;
    for(int i = 0; i < 4; i++)
        this->materias[i] = 0;
}

Character::Character(std::string name) {
    this->name = name;
    size = 0;
    for(int i = 0; i < 4; i++)
        this->materias[i] = 0;
}

Character::~Character()
{
    for(int i = 0; i < size; i++)
        unequip(i);
}

std::string const &Character::getName()  const
{
    return (name);
}

void Character::equip(AMateria* m)
{
    materias[this->size++] = m;
}

void Character::unequip(int idx)
{
    if (this->materias[idx] != 0)
        delete this->materias[idx];
    this->materias[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
    if (this->materias[idx] != 0)
        this->materias[idx]->use(target);
}
