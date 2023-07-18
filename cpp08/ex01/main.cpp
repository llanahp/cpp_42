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

#include "Span.hpp"
#include <algorithm>

int main()
{
	Span sp(5);
	try{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "other?" << std::endl;
		sp.addNumber(11);
		std::cout << "yes!!!" << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "shortest: "<< sp.shortestSpan() << std::endl;
		std::cout << "longest: "<< sp.longestSpan() << std::endl;
	}catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "sp2" << std::endl;
	Span sp2(5);
	try
	{
		sp2.addNumber(5);
		std::cout << "shortest: "<< sp2.shortestSpan() << std::endl;
		std::cout << "longest: "<< sp2.longestSpan() << std::endl;
	}catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "sp22" << std::endl;
	Span sp22(5);
	try
	{
		std::cout << "shortest: "<< sp22.shortestSpan() << std::endl;
		std::cout << "longest: "<< sp22.longestSpan() << std::endl;
	}catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Big ones: " << std::endl;
	srand(static_cast<unsigned int>(time(0)));

	Span sp3(20000);
	for (int i = 0; i < 20000; i++)
		sp3.addNumber(rand());
	try
	{
		std::cout << "Starting whith big ones!!!" << std::endl;
		std::cout << "shortest: "<< sp3.shortestSpan() << std::endl;
		std::cout << "longest: "<< sp3.longestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::list<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);
	Span sp4(numbers.begin(), numbers.end());
	try
	{
		std::cout << "shortest: "<< sp4.shortestSpan() << std::endl;
		std::cout << "longest: "<< sp4.longestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
