/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:16:04 by edos-san          #+#    #+#             */
/*   Updated: 2022/08/12 14:30:04 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Convert
{
        private:
            std::string value;
            bool        isImpossible;
            std::string toChar();
            std::string toInt();
            std::string toFloat();
            std::string toDouble();
            float strToFloat(std::string  v);
        public:
            Convert();
            ~Convert();
            void print(std::string v);
            
};


#endif