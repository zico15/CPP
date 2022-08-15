/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:52 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/12 15:32:26 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

int main()
{
	Base *t = generate();
    identify(t);
    delete t;
    std::cout << "====================\n";
    A a;
    identify(a);
	std::cout << "====================\n";
    B b;
    identify(b);
	std::cout << "====================\n";
    C c;
    identify(c);
	std::cout << "====================\n";
    Base d;
    identify(d);
	std::cout << "====================\n";
	Base base;
    identify(&base);
	return 0;
}