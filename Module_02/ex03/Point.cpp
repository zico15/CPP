/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:39:09 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/17 21:34:18 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	
}

Point::Point(Point const &p) : x(p.x), y(p.y)
{
	
}

Point::Point(int x, int y) : x(x), y(y)
{
}

Point::~Point()
{
	
}

Point &Point::operator=(Point const &p)
{
	return (*this);
}

int Point::getX() const
{
	return (x.toInt());
}


int Point::getY() const
{
	return (y.toInt());
}


