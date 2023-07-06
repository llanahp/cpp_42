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

int main()
{
	const Animal* meta = new Animal();
	std::cout << std::endl;
	const Animal* dog = new Dog();
	std::cout << std::endl;
	const Animal* cat = new Cat();
	std::cout << "----------------------------------------" << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << "-----------------------" << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	std::cout << "----------------------------------------" << std::endl;
	
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	std::cout << std::endl;
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << "----------------------------------------" << std::endl;
	std::cout << wrongAnimal->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	std::cout << "-----------------------" << std::endl;
	wrongCat->makeSound();
	wrongAnimal->makeSound();
	std::cout << "-----------------------" << std::endl;
	delete meta;
	delete cat;
	delete dog;
	delete wrongAnimal;
	delete wrongCat;
	return (0);
}
