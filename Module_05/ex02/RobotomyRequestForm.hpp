/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:55 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/11 16:42:52 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	
	private:
	    const std::string target;
	public:
	    RobotomyRequestForm();
	    RobotomyRequestForm(std::string target);
	    RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm);
	    ~RobotomyRequestForm();
	    RobotomyRequestForm &operator=(const RobotomyRequestForm &RobotomyRequestForm);
		void action() const;
};
#endif
