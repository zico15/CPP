/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:17:45 by edos-san          #+#    #+#             */
/*   Updated: 2022/08/14 13:54:40 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
    isImpossible = false;
}

Convert::~Convert()
{
    
}

void Convert::print(std::string v)
{
    this->value = v;
    std::cout << "char: " << toChar() << std::endl;
    std::cout << "int: " << toInt() << std::endl;
    std::cout << "float: " << toFloat() << std::endl;
    std::cout << "double: " << toDouble() << std::endl;
}

std::string Convert::toChar()
{
    try
	{
    	int i = std::stoi(value);
        if (i < 20 || i > 126)
            return ("Non displayable");
        char c = (char) i;
       	std::stringstream stream;
        stream << c;
        return (stream.str());
	}
	catch(const std::exception& e)
	{
		if (value.length() > 1)
			return "impossible";
       	std::stringstream stream;
        stream << value[0];
        return (stream.str());
	}
}

std::string Convert::toInt()
{
    try
	{
    	int i = std::stoi(value);
        return (std::to_string(i));
	}
	catch(const std::exception& e)
	{
		if (value.length() > 1)
			return "impossible";
		int i = (int) value[0];
       	std::stringstream stream;
        stream << i;
        return (stream.str());
	}
}

std::string Convert::toFloat()
{
    try
	{
    	float f = std::stof(value);
        std::stringstream stream;
        stream << std::fixed << std::setprecision(1) << f << "f";
        return (stream.str());
	}
	catch(const std::exception& e)
	{
		if (value.length() > 1)
			return "impossible";
		float f = (float) value[0];
       	std::stringstream stream;
        stream << std::fixed << std::setprecision(1) << f << "f";
        return (stream.str());
	}
}

std::string Convert::toDouble()
{
    try
	{
    	double d = std::stod(value);
        std::stringstream stream;
        stream << std::fixed << std::setprecision(1) << d;
        return (stream.str());
	}
	catch(const std::exception& e)
	{
		if (value.length() > 1)
			return "impossible";
		double d = (double) value[0];
       	std::stringstream stream;
        stream << std::fixed << std::setprecision(1) << d;
        return (stream.str());
	}
}