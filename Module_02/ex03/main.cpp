/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:22:39 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/17 21:40:29 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


int main( void ) {

	Point a(0,0);
	Point b(10,30);
	Point c(20,0);
	Point point(30,15);

   	if (bsp(a, b, c, point))
   		std::cout <<"Inside\n";
   else
     	std::cout <<"Not Inside\n";
	return 0;
}
