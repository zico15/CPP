/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    bsp.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:45:29 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/17 21:38:24 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>
#include <iostream>

/* A utility function to calculate area of triangle formed by (x1, y1),
   (x2, y2) and (x3, y3) */
static float check_area(int x1, int y1, int x2, int y2, int x3, int y3)
{
   return std::roundf(((float)(x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))) / 2.0f);
}
  
/* Driver program to test above function */

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float A = check_area (a.getX(), a.getY(), b.getX(), b.getY(), c.getX(),  c.getY());
  
   /* Calculate area of triangle PBC */ 
   float A1 = check_area (point.getX(), point.getY(), b.getX(), b.getY(), c.getX(),  c.getY());
  
   /* Calculate area of triangle PAC */ 
   float A2 = check_area (a.getX(), a.getY(), point.getX(), point.getY(), c.getX(), c.getY());
  
   /* Calculate area of triangle PAB */  
   float A3 = check_area (a.getX(), a.getY(), b.getX(), b.getY(), point.getX(), point.getY());
    
   /* Check if sum of A1, A2 and A3 is same as A */
   return (A == A1 + A2 + A3);
}

