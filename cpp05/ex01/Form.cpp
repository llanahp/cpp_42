/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:18:45 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 17:18:46 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"




Form::Form(std::string const name, unsigned int grade_sign) : _name(name), _signed(false), _grade_sign(grade_sign), _grade_execute(0)
{
	if (grade_sign < 1)
		throw Form::GradeTooHighException();
	else if (grade_sign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& copy):_name(copy.getName()),_signed(copy.getIsSigned()), _grade_sign(copy.getSign()) , _grade_execute(copy.getExecute())
{

}

Form::~Form()
{
}

Form& Form::operator=(const Form& rhs)
{
	if (this != &rhs)
		this->_signed = rhs.getIsSigned();	
	return (*this);
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getIsSigned() const
{
	return (this->_signed);
}

unsigned int Form::getSign() const
{
	return (this->_grade_sign);
}

unsigned int Form::getExecute() const
{
	return (this->_grade_execute);
}

std::ostream&	operator<<(std::ostream& o, const Form& rhs)
{
	o << rhs.getName() << " form, grade required to sign it: " << rhs.getSign() 
	<< ", grade required to execute it: " << rhs.getExecute() 
	<< ", is signed: " << rhs.getIsSigned() ;
	return (o);
}


bool Form::beSigned(const Bureaucrat& rhs)
{
	if (rhs.getGrade() > (int)this->getSign())
		throw Form::GradeTooLowException();
	else
	{
		if (getIsSigned() == false)
		{
			this->_signed = true;
			return (true);
		}
		else
			std::cout << "Form " << this->getName() << " is already signed" << std::endl;
		return (false);
	}
}