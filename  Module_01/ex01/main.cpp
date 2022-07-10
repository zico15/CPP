/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:30:52 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/09 22:54:21 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(void)
{
	Zombie *list;
	int size = 10;
	
	list = zombieHorde(size, "monster");
	if (list != NULL)
	{
		for(int i = 0; i < size; i++)
			list[i].announce();
		delete[] list;
	}	
}
