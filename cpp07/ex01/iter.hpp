
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:18:45 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 17:18:46 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

template <typename T>
void	iter(T *array, size_t b, void (*f)(T &))
{
	for (size_t i = 0; i < b; i++)
		f(array[i]);
}

template <typename T>
void	print(T &a)
{
	std::cout << a << std::endl;
}
