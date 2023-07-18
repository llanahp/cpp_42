
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:18:45 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 17:18:46 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

template <typename T>
void easyfind(T& array, int b)
{
	if (std::find(array.begin(), array.end(), b) != array.end())
		std::cout << "Value found" << std::endl;
	else
		throw std::runtime_error("Value not found in container");
}
