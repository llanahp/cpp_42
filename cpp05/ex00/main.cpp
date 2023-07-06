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

int main()
{
	try
	{
		Bureaucrat b1 = Bureaucrat("Pepe", 3);
		std::cout << b1 << std::endl;
		b1.incrementGrade();
		std::cout << b1 << std::endl;
		b1.incrementGrade();
		std::cout << b1 << std::endl;
		b1.incrementGrade();
		std::cout << b1 << std::endl;
		b1.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{	
		std::cout << "\n\tJuan" << std::endl;
		Bureaucrat b2 = Bureaucrat("Juan", 300);
		b2.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{	
		std::cout << "\n\tJuan2" << std::endl;
		Bureaucrat b21 = Bureaucrat("Juan2", -2);
		b21.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "\n\tPedro" << std::endl;
		Bureaucrat b3 = Bureaucrat("Pedro", 148);
		std::cout << b3 << std::endl;
		b3.decrementGrade();
		std::cout << b3 << std::endl;
		b3.decrementGrade();
		std::cout << b3 << std::endl;
		b3.decrementGrade();
		std::cout << "4" << std::endl;
		b3.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat b9 = Bureaucrat("Pedro", -8);
	}catch(std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
