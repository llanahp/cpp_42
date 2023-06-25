/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:30:36 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/20 14:30:38 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "/*      Zombie in stack      *\\" << std::endl;
	Zombie zombie1("Pepe");
	
	std::cout << "\n/*      Zombie in heap      *\\" << std::endl;
	Zombie *zombie2 = newZombie("Juan");
	zombie2->announce();
	delete zombie2;


	std::cout << "\n/*      random      *\\" << std::endl;
	randomChump("Paco");
	return (0);
}
