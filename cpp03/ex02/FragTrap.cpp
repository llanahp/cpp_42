/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:18:37 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 17:18:38 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_name = "";
	this->_hitpoints = 100;
	this->_energy = 100;
	this-> _damage= 30;
	std::cout << "FragTrap " << this->_name << " is born" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "FragTrap " << this->_name << " is born" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energy = copy._energy;
	this-> _damage= copy._damage;
	std::cout << "FragTrap " << this->_name << " is born" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " is destroyed" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& other)
{
	this->_name = other._name;
	this->_hitpoints = other._hitpoints;
	this->_energy = other._energy;
	this->_damage = other._damage;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	
	if (this->_energy > 0)
	{
		std::cout << "FragTrap " << this->_name << " high fives!" << std::endl;
		this->_energy--;
	}
	else
		std::cout <<"FragTrap " << this->_name << 
		" doesn´t have enough energy to repair" << std::endl;
}
