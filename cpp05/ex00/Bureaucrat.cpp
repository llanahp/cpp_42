
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