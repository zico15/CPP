/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:07:58 by ezequeil          #+#    #+#             */
/*   Updated: 2022/08/11 23:39:56 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("NULL"), is_signed(0), grade_required(150), grade_execute(0)
{
	std::cout << "Form name: NULL Constructor!" << std::endl;
}

Form::Form(std::string name, int required, int execute): name(name), is_signed(0), grade_required(required), grade_execute(execute)
{
	if (grade_required < 1 || grade_execute < 1)
        throw GradeTooHighException();
    else if (grade_required > 150 || grade_execute > 150)
        throw GradeTooLowException();
	std::cout << "Form name: ("<< name << ") Constructor!" << std::endl;
}

Form::~Form()
{
	std::cout << "Form name: ("<< name << ") destructor!" << std::endl;
}

const char* Form::NotSignedException::what() const throw()
{
    return ("Form has not been signed yet");
}

void Form::execute(Bureaucrat const &executor) const
{
    if (!isSigned())
        throw NotSignedException();
    else if (executor.getGrade() > this->grade_execute) 
        throw Bureaucrat::GradeTooLowException() ;
    action();
}

const std::string &Form::getName() const
{
	return (name);
} 

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Form's Grade is too High (Integer value is too low)");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Form's Grade is too Low (Integer value is too high)");
}

void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() < getGradeRequired())
		throw GradeTooLowException();
	else
		is_signed = true;
}

bool Form::isSigned() const
{
	return is_signed;
}

const int Form::getGradeRequired() const
{
	return grade_required;
}

const int Form::getGradeExecute() const
{
	return grade_execute;
}

Form &Form::operator=(const Form &a)
{
	this->is_signed = a.isSigned();
	return (*this);
}

std::ostream &operator<<(std::ostream &os, Form &b)
{
    os << "Form name: " << b.getName() << std::endl;
    os << "Form Minimum Sign Grade: " << b.getGradeRequired() << std::endl;
    os << "Form Minimum Exec Grade: " << b.getGradeExecute() << std::endl;
    os << "The Form has " << (b.isSigned() ?  "been signed already" : "not been signed yet") << std::endl;
    return os;
}