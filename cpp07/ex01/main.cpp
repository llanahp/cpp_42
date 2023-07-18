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

#include "iter.hpp"

int main()
{
	int arr1[] = {1, 2, 3, 4, 5};
    std::cout << "arr1: " << std::endl;
    iter(arr1, 5, &print);

    double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << "\narr2: " << std::endl;
    iter(arr2, 5, &print);

    char arr3[] = {'a', 'b', 'c', 'd', 'e'};
    std::cout << "\narr3: " << std::endl;
    iter(arr3, 5, &print);

    std::string arr4[] = {"one", "two", "three", "four", "five"};
    std::cout << "\narr4: " << std::endl;
    iter(arr4, 5, &print);
	return (0);
}
