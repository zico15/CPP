/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:52 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/12 00:28:43 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "Form Creation Tests" << std::endl;
    std::cout << std::endl;

    Form *temp;
    Intern john;
    temp = john.makeForm("", "A1");
    temp = john.makeForm("NULL", "A1");
    temp = john.makeForm("TX", "A1");
    temp = john.makeForm("HJ", "Official Shrub");
    delete temp;
    temp = john.makeForm("robotomy request", "Official Robot");
    delete temp;
    temp = john.makeForm("Presidential Pardon", "Official Presi");
    delete temp;
}