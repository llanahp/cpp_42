/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:54:08 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/20 14:54:08 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr<<"ERROR!! (./Replace file string1 string2)" <<std::endl;
		return (1);
	}
	File file = File();
	file.setName(argv[1]);
	file.setStrings(argv[2],argv[3]);
	file.replace();
	return (0);
}
