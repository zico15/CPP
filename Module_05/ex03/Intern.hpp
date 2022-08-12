/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:55 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/11 23:43:34 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
		private:
			Form *getFrom(std::string name, std::string target);
		public:
			Intern();
			Intern &operator=(const Intern &intern);
			Intern(const Intern &intern);
			~Intern();
			Form *makeForm(std::string form, std::string target);
		    class UnavailableFormException : public std::exception {
		        private:
		            virtual const char* what() const throw();
		    };
		    class EmptyFormException : public std::exception {
		        private:
		            virtual const char* what() const throw();
		    };
};
#endif
