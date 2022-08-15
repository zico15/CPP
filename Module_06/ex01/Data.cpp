/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:17:45 by edos-san          #+#    #+#             */
/*   Updated: 2022/08/12 14:44:15 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
	value = "DATA_NULL";
}

Data::Data(std::string value)
{
	setValue(value);
}

Data::~Data()
{
    
}


std::string Data::getValue() const
{
	return (this->value);
}

void Data::setValue(std::string value)
{
	this->value = value;
}

std::ostream &operator<<(std::ostream &os, Data const &d)
{
	os << "VALUE: " << d.getValue();
	return (os);
}

uintptr_t serialize(Data* d)
{
    return (reinterpret_cast<uintptr_t>(d));
}

Data* deserialize(uintptr_t t)
{
    return (reinterpret_cast<Data*>(t));
}