/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:54:39 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/20 14:54:40 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;
	
	harl = Harl();
	std::cout << "[ Debug ]" << std::endl;
	harl.complain("debug");
	std::cout << "---------" << std::endl;
	std::cout << "[ info ]" << std::endl;
	harl.complain("info");
	std::cout << "---------" << std::endl;
	std::cout << "[ warning ]" << std::endl;
	harl.complain("warning");
	std::cout << "---------" << std::endl;
	std::cout << "[ error ]" << std::endl;
	harl.complain("error");
	std::cout << "---------" << std::endl;
	std::cout << "[ unknown ]" << std::endl;
	harl.complain("unknown");
	return (0);
}
