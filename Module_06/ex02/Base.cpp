/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:17:45 by edos-san          #+#    #+#             */
/*   Updated: 2022/08/12 15:32:19 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
    
}

Base * generate(void)
{
	srand(time(NULL));
	int random = rand() % 3;
	switch (random)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			return (new A());
	}
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "TypeObjec: A"<< '\n';
	else if (dynamic_cast<B *>(p))
		std::cout << "TypeObjec: B"<< '\n';
	else if (dynamic_cast<C *>(p))
		std::cout << "TypeObjec: C" << '\n';
	else 
		std::cout << "ERROR: identify indefinite!" << '\n';
}

void identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A &>(p);
		std::cout << "TypeObjecPointed: A"<< '\n';
	}
	catch(const std::exception& e)
	{
		try
		{
			B b = dynamic_cast<B &>(p);
			std::cout << "TypeObjecPointed: B"<< '\n';
		}
		catch(const std::exception& e)
		{
			try
			{
				C c = dynamic_cast<C &>(p);
				std::cout << "TypeObjecPointed: C"<< '\n';
			}
			catch(const std::exception& e)
			{
				std::cout << "ERROR: identify point indefinite!" << '\n';
			}	
		}
	}
}




