/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:55 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/11 16:42:52 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	
	private:
	    const std::string target;
	public:
	    PresidentialPardonForm();
	    PresidentialPardonForm(std::string target);
	    PresidentialPardonForm(const PresidentialPardonForm &PresidentialPardonForm);
	    ~PresidentialPardonForm();
	    PresidentialPardonForm &operator=(const PresidentialPardonForm &PresidentialPardonForm);
	  	void action() const;
};

#endif
