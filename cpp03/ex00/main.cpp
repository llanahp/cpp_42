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

#include "ClapTrap.hpp"

int main()
{
	ClapTrap c = ClapTrap("pepe");
	ClapTrap j = ClapTrap("Juan");
	std::cout << "------" << std::endl;
	c.attack("Pedro");
	c.takeDamage(11);
	c.takeDamage(11);
	c.beRepaired(1);
	std::cout << "------" << std::endl;
	j.attack("Pedro");
	j.beRepaired(10);
	j.takeDamage(1);
	std::cout << "------" << std::endl;
	return (0);
}
