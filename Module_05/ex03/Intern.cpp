/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:58 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/12 00:28:33 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Constructor!" << std::endl;
}

Intern::Intern(const Intern &intern)
{
    (void) intern;
	std::cout << "Intern Constructor Copy!" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern  destructor!" << std::endl;
}


Intern &Intern::operator=(const Intern &a)
{
	return (*this);
}

Form *Intern::getFrom(std::string name, std::string target)
{
    char c;
    if (name.empty())
		throw EmptyFormException();
    for (int i = 0; i < name.length(); i++)
    {
        c = std::tolower(name[i]);
        name[i] = c;
    }
    if ("presidential pardon" == name)
        return new PresidentialPardonForm();
    else if ("shrubbery creation" == name)
        return new ShrubberyCreationForm();
    else if ("robotomy request" == name)
        return new RobotomyRequestForm();
    else
        throw UnavailableFormException();
}

Form *Intern::makeForm(std::string form, std::string target)
{
	try {
		Form *temp = getFrom(form, target);
		std::cout << "Intern creates " << temp->getName() << std::endl;
		return (temp);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

const char*Intern::UnavailableFormException::what() const throw()
{
	return ("Form is not available");
}

const char*Intern::EmptyFormException::what() const throw()
{
	return ("Form is empty");
}