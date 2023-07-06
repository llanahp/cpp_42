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

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void	leaks()
{
	system("leaks -q Animal");
}

int main()
{
	atexit(leaks);
	std::cout << "\t***constructor***" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "-_-_-_-_-_-_-_-" << std::endl;
	Dog basic;
	std::cout << std::endl;
	{
		Dog tmp = basic;
	}
	std::cout << "-_-_-_-_-_-_-_-" << std::endl;
	std::cout << "\t***destructor***" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	delete j;
	std::cout  << std::endl;
	delete i;
	std::cout << "-------------------------------" << std::endl;
	const Animal* animal[6] = {new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat()};
	for (int i = 0; i < 6; i++)
	{
		delete animal[i];
	}
	std::cout << "-------------------------------" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "Next: basic dog destructor" << std::endl;
	std::cout << "-------------------------------" << std::endl;

	
	return (0);
}
