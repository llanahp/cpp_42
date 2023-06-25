/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:18:37 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 17:18:38 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "";
	this->_hitpoints = 10;
	this->_energy = 10;
	this->_damage = 0;
	std::cout << "ClapTrap " << this->_name << " is created" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
{
	this->_name = name;
	this->_hitpoints = 10;
	this->_energy = 10;
	this->_damage = 0;
	std::cout << "ClapTrap " << this->_name << " is created" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& copy)
{
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energy = copy._energy;
	this->_damage = copy._damage;
	std::cout << "ClapTrap " << this->_name << " is created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " is destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& other)
{
	this->_name = other._name;
	this->_hitpoints = other._hitpoints;
	this->_energy = other._energy;
	this->_damage = other._damage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitpoints <= 0)
		std::cout << this->_name << " is already dead" << std::endl;
	else if (this->_energy > 1)
	{
		std::cout << "ClapTrap " << this->_name << 
		" attacks " << target << ", causing " <<
		this->_damage << " points of damage!" << std::endl;
		if (this->_hitpoints < this->_damage)
			this->_hitpoints = 0;
		else
			this->_hitpoints -= _damage;
		this->_energy--;
	}
	else
		std::cout <<"ClapTrap " << this->_name << 
		" doesn´t have enough energy to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << 
			" is been atacked causing " << amount
			<< " less points of health!" << std::endl;
			if (this->_hitpoints < amount)
				this->_hitpoints = 0;
			else
				this->_hitpoints -= amount;
	}
	else
		std::cout << this->_name << " is already dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints <= 0)
		std::cout << this->_name << " is already dead" << std::endl;
	else if (this->_energy > 1)
	{
		std::cout << "ClapTrap " << this->_name << 
		" is been repaired, obtains " << amount
		<< " points!" << std::endl;
		this->_hitpoints += amount;
		this->_energy--;
	}
	else
		std::cout <<"ClapTrap " << this->_name << 
		" doesn´t have enough energy to repair" << std::endl;
}
