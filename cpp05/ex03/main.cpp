/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:18:51 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 17:18:51 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	
	Intern someRandomIntern;
	Bureaucrat b("Pepe", 1);
	
	AForm* form1 = someRandomIntern.makeForm("PresidentialPardonForm", "Juan");
	b.signForm(*form1);
	if (form1)
		delete form1;
	std::cout << "----" << std::endl; 
	AForm* form2 = someRandomIntern.makeForm("RobotomyRequestForm", "Juan");
	b.signForm(*form2);
	if (form2)
		delete form2;
	std::cout << "----" << std::endl;
	AForm* form3 = someRandomIntern.makeForm("ShrubberyCreationForm", "Juan");
	b.signForm(*form3);
	if (form3)
		delete form3;
	std::cout << "----" << std::endl;
	AForm* form4 = someRandomIntern.makeForm("C28", "Juan");
	if (form4)
		delete form4;
	return (0);
}
