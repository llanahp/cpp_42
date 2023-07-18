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

#include "easyfind.hpp"

int main()
{
	int	arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::vector<int>	vect(arr, arr + sizeof(arr) / sizeof(int));
	std::list<int>		list(arr, arr + sizeof(arr) / sizeof(int));

	try {
		int value = 7;
		easyfind(vect, value);
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		int value = 10;
		easyfind(list, value);
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		int value = 80;
		easyfind(list, value);
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		int value = -2;
		easyfind(list, value);
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
