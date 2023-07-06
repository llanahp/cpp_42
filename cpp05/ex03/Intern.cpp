/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:18:45 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 17:18:46 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(const Intern& copy)
{
	*this = copy;
}

Intern::~Intern()
{
}

Intern& Intern::operator=(const Intern& rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

AForm* Intern::makeForm(const std::string name, const std::string target)
{
	t_formList forms[] = 
	{
		{ "PresidentialPardonForm", new PresidentialPardonForm(target) },
		{ "RobotomyRequestForm", new RobotomyRequestForm(target) },
		{ "ShrubberyCreationForm", new ShrubberyCreationForm(target) },
		{ "", NULL }
	};
	AForm	*resultForm = NULL;
	for (int i = 0; forms[i].formType != NULL; i++)
	{
		if (forms[i].formName == name)
		{
			resultForm = forms[i].formType;
		}
		else
			delete forms[i].formType;
	}
	if (resultForm == NULL)
	{
		std::cout << "Intern can't create " << name << " form" << std::endl;
		return (NULL);
	}
	else
		std::cout << "Intern creates " << resultForm->getName() << std::endl;
	return (resultForm);
	
}


std::ostream &	operator<<(std::ostream & ostr, Intern const & instance)
{
	(void)instance;
	ostr << "Intern";
	return ostr;
}
