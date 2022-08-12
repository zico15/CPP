/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:52 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/11 15:36:33 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("A1", 2);

	try
	{
		a.decrement_grade();
		std::cout << a;
		a.decrement_grade();
		std::cout << a;
		a.decrement_grade();
		std::cout << a;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR: " << e.what() << std::endl;
	}

	Bureaucrat b("B1", 148);

	try
	{
		b.increment_grade();
		std::cout << b;
		b.increment_grade();
		std::cout << b;
		b.increment_grade();
		std::cout << b;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR: " << e.what() << std::endl;
	}
	
	return 0;
}