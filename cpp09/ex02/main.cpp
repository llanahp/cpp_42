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

#include "PmergeMe.hpp"
# include <iostream>
# include <algorithm>

int main(int argc, char **argv)
{
	try
	{
		if (argc < 2)
		{	
			std::cout << "usage: ./PmergeMe  /*numbers*/" << std::endl;
			return (0);
		}
		PmergeMe pm;
		pm.shortDeque(argv, argc);
		pm.shortVector(argv, argc);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
