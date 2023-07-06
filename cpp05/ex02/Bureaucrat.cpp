
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:18:45 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 17:18:46 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& copy)
{
	if (this == &copy)
		return (*this);
	this->_grade = copy._grade;
	std::cout << "Name is const!!, only copy grade" << std::endl;
	return (*this);

}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (this->getGrade() > 1)
	{
		this->_grade--;
		std::cout << "Bureaucrat " << this->getName() << " increase his grade to "  << this->getGrade() << std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::decrementGrade()
{
	if (this->getGrade() < 150)
	{
		this->_grade++;
		std::cout << "Bureaucrat " << this->getName() << " decrease his grade to "  << this->getGrade() << std::endl;
	}
	else
		throw Bureaucrat::GradeTooHighException();
}

std::ostream&	operator<<(std::ostream& o, const Bureaucrat & other)
{
	o << other.getName() << ", bureaucrat grade " << other.getGrade();
	return (o);
}

void	Bureaucrat::signForm(AForm& form)
{
	try
	{
		if (form.beSigned(*this) == true) 
			std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executes " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " couldn’t execute " << form.getName() << " because " << e.what() << std::endl;
	}
}