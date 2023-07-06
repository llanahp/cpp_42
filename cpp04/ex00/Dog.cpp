/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:26:02 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/23 17:26:03 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src): Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = src.getType();
}

Dog &Dog::operator=(const Dog &rhs) 
{
	std::cout << "Dog assignation operator called" << std::endl;	
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Wouf" << std::endl;
}