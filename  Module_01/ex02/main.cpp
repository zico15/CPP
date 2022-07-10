/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezequeil <ezequeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:30:52 by ezequeil          #+#    #+#             */
/*   Updated: 2022/07/09 23:07:55 by ezequeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>


int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	
	std::string*  stringPTR = &str;
	std::string& stringREF = str;
	
	std::cout << "stringPTR address : " << stringPTR << std::endl;
	std::cout << "stringREF address : " << &stringREF << std::endl;

	std::cout << "using stringPTR : " << *stringPTR << std::endl;
	std::cout << "using stringREF : " << stringREF << std::endl;
}
