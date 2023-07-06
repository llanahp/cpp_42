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

int main()
{
	try
	{
		Bureaucrat b1 = Bureaucrat("Pepe", 3);
		Bureaucrat b2 = Bureaucrat("Juan", 130);
		std::cout << "----" << std::endl; 
		PresidentialPardonForm presForm = PresidentialPardonForm("Royal house inscription");
		b1.signForm(presForm);
		b1.executeForm(presForm);
		b2.executeForm(presForm);
		std::cout << presForm << std::endl;
		std::cout << "----" << std::endl; 
		RobotomyRequestForm robotForm = RobotomyRequestForm("Drill");
		b1.signForm(robotForm);
		b1.executeForm(robotForm);
		b2.executeForm(robotForm);

		std::cout << robotForm << std::endl;
		std::cout << "----" << std::endl; 
		ShrubberyCreationForm shurrForm = ShrubberyCreationForm("TREEE");
		b1.signForm(shurrForm);
		b1.executeForm(shurrForm);
		b2.executeForm(shurrForm);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
