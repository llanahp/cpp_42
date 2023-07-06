/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:50:46 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/25 14:50:47 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequestForm", 72, 45)
{
	this->setTarget("Default");
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target): AForm("RobotomyRequestForm", 72, 45)
{
	this->setTarget(target);
}



RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy): AForm(copy.getName(),copy.getSign(),copy.getExecute())
{
	this->setTarget(copy.getTarget());
}


RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		this->setTarget(rhs.getTarget());
	}
	return (*this);
}




void	RobotomyRequestForm::beExecuted() const
{
	std::cout << "* drilling noises *" << std::endl;
	if (rand() % 2)
		std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
	else
		std::cout << this->getTarget() << " has failed to be robotomized." << std::endl;
}
