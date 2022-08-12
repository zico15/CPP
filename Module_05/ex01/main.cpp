/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:52 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/11 16:39:37 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void print(Form &a)
{
	std::cout << "\n=================" << "\n";
	std::cout << a;
}

int main()
{
	Bureaucrat b("BOBY", 15);
	try
	{
    	Form a("A1", 10, 5);
		std::cout << "\n=================" << "\n";
		print(a);
		a.beSigned(b);
		print(a);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
    	Form a("A2", 16, 5);
		std::cout << "\n=================" << "\n";
		print(a);
		a.beSigned(b);
		print(a);
	}
	catch(const std::exception& e)
	{
		std::cout << "ERROR: " << e.what() << '\n';
	}
	return 0;
}