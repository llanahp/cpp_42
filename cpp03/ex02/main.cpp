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

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap p1 = FragTrap("Pepe");
	FragTrap p2 = FragTrap("Juan");
	std::cout << "------------" << std::endl;
	p1.attack("Jose");
	p2.takeDamage(10);
	p1.beRepaired(9);
	p2.highFivesGuys();
	std::cout << "------------" << std::endl;
	return (0);
}
