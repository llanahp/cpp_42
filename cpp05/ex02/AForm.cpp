/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:18:45 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 17:18:46 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm(std::string const name, unsigned int grade_sign) : _name(name), _signed(false), _grade_sign(grade_sign), _grade_execute(0)
{
	if (grade_sign < 1)
		throw AForm::GradeTooHighException();
	else if (grade_sign > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(std::string const name, unsigned int grade_sign, unsigned int grade_execute) : _name(name), _signed(false), _grade_sign(grade_sign), _grade_execute(grade_execute)
{
	if (grade_sign < 1)
		throw AForm::GradeTooHighException();
	else if (grade_sign > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& copy):_name(copy.getName()),_signed(copy.getIsSigned()), _grade_sign(copy.getSign()) , _grade_execute(copy.getExecute())
{

}

AForm::~AForm()
{
}

AForm& AForm::operator=(const AForm& rhs)
{
	if (this != &rhs)
		this->_signed = rhs.getIsSigned();	
	return (*this);
}

std::string AForm::getName() const
{
	return (this->_name);
}

bool AForm::getIsSigned() const
{
	return (this->_signed);
}

unsigned int AForm::getSign() const
{
	return (this->_grade_sign);
}

unsigned int AForm::getExecute() const
{
	return (this->_grade_execute);
}

std::ostream&	operator<<(std::ostream& o, const AForm& rhs)
{
	o << rhs.getName() << " AForm, grade required to sign it: " << rhs.getSign() 
	<< ", grade required to execute it: " << rhs.getExecute() 
	<< ", is signed: " << rhs.getIsSigned() ;
	return (o);
}

bool AForm::beSigned(const Bureaucrat& rhs)
{
	if (rhs.getGrade() > (int)this->getSign())
		throw AForm::GradeTooLowException();
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


void	AForm::setTarget(std::string const target)
{
	this->_target = target;
}

std::string	AForm::getTarget() const
{
	return (this->_target);
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > (int)this->getExecute())
		throw AForm::GradeTooLowException();
	else if (this->getIsSigned() == false)
		throw std::string("The form is not signed.");
	else
		this->beExecuted();
}


void				AForm::beExecuted() const {}