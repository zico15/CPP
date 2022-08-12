/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:58 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/11 16:29:57 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137), target("NULL")
{
	std::cout << "ShrubberyCreationForm name: NULL Constructor!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << "ShrubberyCreationForm target: ("<< target << ") Constructor!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &p)
: Form(p.getName() , p.getGradeRequired(), p.getGradeExecute()), target(p.target)
{
    std::cout << "ShrubberyCreationForm:" << *this << "was copied" << std::endl;
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm name: ("<< Form::getName() << ") destructor!" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &a)
{
	return (*this);
}

void ShrubberyCreationForm::action() const
{
	
}
