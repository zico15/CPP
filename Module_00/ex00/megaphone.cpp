/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:59:21 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/10 21:16:49 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argv, char **argc)
{
	std::string arg;
	if (argv == 1)
		return (0);
	for (int i = 1; i < argv; i++)
	{
		arg = std::string(argc[i]);
		for (size_t j = 0; j < arg.length(); j++)
			std::cout << (char) std::toupper(arg[j]);
	}
	std::cout << "\n";
}
