/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:58 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/11 16:29:57 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("NULL"), grade(0)
{
	std::cout << "Bureaucrat name: NULL Constructor!" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade)
{
	if (grade < 1) {
        throw GradeTooHighException();
    } else if (grade > 150) {
        throw GradeTooLowException();
    }
	std::cout << "Bureaucrat name: ("<< name << ") Constructor!" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat name: ("<< name << ") destructor!" << std::endl;
}

int	Bureaucrat::getGrade() const
{
	return (grade);
}

const std::string &Bureaucrat::getName() 
{
	return (name);
} 

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &a)
{
	  this->grade = a.grade;
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat's Grade is too High (Integer value is too low)");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat's Grade is too Low (Integer value is too high)");
}

void Bureaucrat::increment_grade()
{
	if (grade + 1 > 150)
		throw GradeTooHighException();
	else
		grade++;
}

void Bureaucrat::decrement_grade()
{
	if (grade - 1 < 0)
		throw GradeTooLowException();
	else
		grade--;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &b)
{
	return os <<  b.getName() << ", bureaucrat grade " << b.getGrade() << "\n";
}