/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:16:04 by edos-san          #+#    #+#             */
/*   Updated: 2022/08/12 14:44:10 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <string>
#include <iostream>

class Data
{
        private:
            std::string value;
        public:
            Data();
            Data(std::string value);
            ~Data();
            std::string getValue() const;
            void setValue(std::string type);
            
};

uintptr_t serialize(Data* d);
Data* deserialize(uintptr_t t);
std::ostream &operator<<(std::ostream &os, Data const &d);

#endif