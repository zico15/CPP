/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 22:36:17 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/09 22:53:18 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
	if (N <= 0)
		return (NULL);
	Zombie *list = new Zombie[N];
	for (int i = 0; i < N; i++)
		list[i].setName(name);
	return (list);
}
