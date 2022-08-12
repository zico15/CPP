/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:52 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/11 23:54:25 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
    	std::cout << "Basic Tests" << std::endl;
    	std::cout << std::endl;
	
    	//Form test;
    	std::cout << std::endl;
    	std::cout << "Shrubbery Form Tests" << std::endl;
    	std::cout << std::endl;
    	ShrubberyCreationForm shrub1;
    	ShrubberyCreationForm shrub2("official");
    	ShrubberyCreationForm shrub3(shrub1);
    	shrub3 = shrub2;
    	std::cout << std::endl;
    	Bureaucrat farm("Farmer", 146);
    	Bureaucrat stud("Student", 145);
    	Bureaucrat intern("Intern", 138);
    	Bureaucrat pres("President", 137);
	
    	farm.signForm(shrub1);
    	stud.signForm(shrub2);
    	intern.executeForm(shrub2);
    	pres.executeForm(shrub1);
    	pres.executeForm(shrub2);
    	std::cout << std::endl;
	}

	{
		std::cout << std::endl;
    	std::cout << "Robotomy Form Tests" << std::endl;
    	std::cout << std::endl;
    	RobotomyRequestForm robot1;
    	RobotomyRequestForm robot2("official");
    	RobotomyRequestForm robot3(robot1);
    	robot3 = robot2;
    	std::cout << std::endl;
    	Bureaucrat farm("Farmer", 73);
    	Bureaucrat stud("Student", 72);
    	Bureaucrat intern("Intern", 46);
    	Bureaucrat pres("President", 45);
	
    	farm.signForm(robot1);
    	stud.signForm(robot2);
    	intern.executeForm(robot2);
    	pres.executeForm(robot1);
    	pres.executeForm(robot2);
    	std::cout << std::endl;
	}
}