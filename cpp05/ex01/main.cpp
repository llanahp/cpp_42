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
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat b1 = Bureaucrat("Pepe", 3);
		Bureaucrat b2 = Bureaucrat("Juan", 130);

		Form f1 = Form("28C", 2);
		Form f2 = Form("40D", 140);

		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;

		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;

		std::cout << std::endl;
		b1.signForm(f1);
		b2.signForm(f1);
		std::cout << std::endl;
		std::cout << std::endl;
		b1.signForm(f2);
		b1.signForm(f2);

		std::cout << "One more!!!" << std::endl;

		std::cout << std::endl;
		b1.signForm(f2);
		b2.signForm(f2);

		b1.incrementGrade();
		b1.signForm(f1);
		b1.signForm(f1);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
