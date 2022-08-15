/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:52 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/12 17:06:00 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template< typename T >
void tester(T const &value)
{
	std::cout << "VALUE: " << value << std::endl;
}

int	main(void)
{
	int			intArray[] = {-5, 33, 140, 3, 4, 5, 22};
	char a[7] = "abcdef"; 

	std::cout << "=======================\n";
	iter(intArray, 6, tester);
	std::cout << "=======================\n";
	iter(a, 6, tester);
	return (0);
}