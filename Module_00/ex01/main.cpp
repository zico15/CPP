/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:07:30 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/11 15:33:02 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void menu()
{
	system("clear");
	std::cout << "======MENU======\n";
	std::cout << "add\n";
	std::cout << "search\n";
	std::cout << "exit\n";
	std::cout << "=================\n";
}

int main(void) 
{

    PhoneBook phoneBook;
    char tmp[101];
    string a;
    
    while (1)
    {
	  menu();
      scanf("%100s", tmp);
      a = tmp;
      std::cout << a << "\n";
      	if (a == "exit")
        	phoneBook.EXIT();
		else if (a == "add")
        	phoneBook.ADD();
		else if (a == "search")
        	phoneBook.SEARCH();
      
    }
    
    return 0;
}
