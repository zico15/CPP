/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:55 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/11 23:45:47 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	
	private:
	    const std::string target;
	public:
	    ShrubberyCreationForm();
	    ShrubberyCreationForm(std::string target);
	    ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm);
	    ~ShrubberyCreationForm();
	    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ShrubberyCreationForm);
		void action() const;
};

#endif
