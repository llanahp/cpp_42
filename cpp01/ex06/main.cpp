/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:55:15 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/20 14:55:16 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc <= 1)
	{
		std::cout << "[ Do you say something? ]" <<std::endl;
		return (0);
	}
	Harl harl = Harl();
	harl.complain(argv[1]);
	return (0);
}
