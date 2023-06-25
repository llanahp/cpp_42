/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:53:40 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/20 14:53:41 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->_type = type;
    return ;
}

Weapon::Weapon(const Weapon& s)
{
	*this = s;
	return ;
}

Weapon::~Weapon(void)
{
    return ;
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}

const std::string& Weapon::getType(void)
{   
    return (this->_type);
}
