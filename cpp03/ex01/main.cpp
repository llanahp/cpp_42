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

#include "ScavTrap.hpp"

int main()
{
	ScavTrap s1 = ScavTrap("Pepe");
	ScavTrap s2 = ScavTrap("Juan");
	std::cout << "------------" << std::endl;
	s1.attack("Jose");
	s2.takeDamage(10);
	s1.beRepaired(9);
	s2.guardGate();
	std::cout << "------------" << std::endl;
	return (0);
}
