/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:42:32 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/10 18:10:08 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argv, char **argc)
{
	Harl harl;

    if (argv == 1)
		harl.complain(std::string(""));
	else
		harl.complain(std::string(argc[1]));
}
