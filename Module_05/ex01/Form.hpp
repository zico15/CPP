/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:55 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/11 16:30:50 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
	
	private:
	    const std::string 	name;
	    bool			  	is_signed;
		const int		   	grade_required;
		const int			grade_execute;
	public:
	    Form();
	    Form(std::string name, int required, int execute);
	    Form(const Form &Form);
	    ~Form();
	    Form &operator=(const Form &Form);
	    const std::string &getName();
		void beSigned(const Bureaucrat& b);
		const int getGradeRequired();
		const int getGradeExecute();
		bool isSigned() const;
		class GradeTooHighException : public std::exception {
	        private:
	            virtual const char* what() const throw();
	    };
	    class GradeTooLowException : public std::exception {
	        private:
	            virtual const char* what() const throw();
	    };
};

std::ostream &operator<<(std::ostream &os, Form &b);


#endif
