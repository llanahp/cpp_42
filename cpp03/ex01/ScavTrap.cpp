/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 18:10:57 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 18:10:58 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_name = "";
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap " << this->_name << " is born" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap " << this->_name << " is born" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " is destroyed" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& other)
{
	this->_name = other._name;
	this->_hitpoints = other._hitpoints;
	this->_energy = other._energy;
	this->_damage = other._damage;
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout<< "ScavTrap " << this->_name << " is now in Gate keeper mode"  <<std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hitpoints <= 0)
		std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
	else if (this->_energy > 1)
	{
		std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
		this->_energy -= 1;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is out of energy" << std::endl;
}