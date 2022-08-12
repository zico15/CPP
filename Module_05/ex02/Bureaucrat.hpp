/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:55 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/11 23:42:48 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Form;

class Bureaucrat
{
	
	private:
	    const std::string name;
	    int grade;
	public:
	    Bureaucrat();
	    Bureaucrat(std::string name, int grade);
	    Bureaucrat(const Bureaucrat &bureaucrat);
	    ~Bureaucrat();
	    Bureaucrat &operator=(const Bureaucrat &bureaucrat);
	    const std::string &getName();
	    int     getGrade() const;
	    void    increment_grade();
	    void    decrement_grade();
		void	signForm(Form &form);
		void	executeForm(Form const &form);
	    class GradeTooHighException : public std::exception {
	        private:
	            virtual const char* what() const throw();
	    };
	    class GradeTooLowException : public std::exception {
	        private:
	            virtual const char* what() const throw();
	    };
};

#include "Form.hpp"
std::ostream &operator<<(std::ostream &os, Bureaucrat &b);


#endif
