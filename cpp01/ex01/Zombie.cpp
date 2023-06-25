/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:51:34 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/20 14:51:37 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(const Zombie& s)
{
	*this = s;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " is dead" << std::endl;
	return ;
}


void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}


void Zombie::setName(std::string name)
{
	this->_name = name;
	return ;
}
