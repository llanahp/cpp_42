/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:50:56 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/20 14:50:57 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int N = 5;
	Zombie *zombis = zombieHorde(N, "zombi");
	for (int i = 0; i < N; i++)
		zombis[i].announce();
	delete [] zombis;
	return (0);
}
