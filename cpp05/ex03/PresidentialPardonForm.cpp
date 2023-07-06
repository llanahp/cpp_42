/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:50:33 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/25 14:50:34 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm("PresidentialPardonForm", 25, 5)
{
	this->setTarget("Default");
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target): AForm("PresidentialPardonForm", 25, 5)
{
	this->setTarget(target);
}



PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy): AForm(copy.getName(),copy.getSign(),copy.getExecute())
{
	this->setTarget(copy.getTarget());
}


PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		this->setTarget(rhs.getTarget());
	}
	return (*this);
}

void	PresidentialPardonForm::beExecuted() const
{
	std::cout << this->getTarget() << " was pardonned by Zafod Beeblebrox." << std::endl;
}
