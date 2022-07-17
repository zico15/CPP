/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:39:09 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/17 21:34:23 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{

	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(Point const &p);
		Point(int x, int y);
		~Point();
		Point &operator=(Point const &p);
		int getX() const;
		int getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
