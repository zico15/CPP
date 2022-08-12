/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:58 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/11 16:29:57 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5), target("NULL")
{
	std::cout << "PresidentialPardonForm name: NULL Constructor!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5), target(target)
{
	std::cout << "PresidentialPardonForm target: ("<< target << ") Constructor!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p)
: Form(p.getName() , p.getGradeRequired(), p.getGradeExecute()), target(p.target)
{
    std::cout << "PresidentialPardonForm:" << *this << "was copied" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm name: ("<< getName() << ") destructor!" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &a)
{
	return (*this);
}

void PresidentialPardonForm::action() const
{
	
}
