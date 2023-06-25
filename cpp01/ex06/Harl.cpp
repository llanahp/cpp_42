/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:55:00 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/20 14:55:03 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl(void)
{
	return ;
}
Harl::Harl(const Harl& s)
{
	*this = s;
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;	
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::display_message(int level)
{
	void	(Harl::*complaint[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = { "debug", "info", "warning", "error"};
	while (level < 4)
	{
		std::cout << "[ "<< levels[level] << " ]" << std::endl;
		(this->*complaint[level])();
		level++;
	}
}

void	Harl::complain(std::string level)
{
	int	i;
	if (level.empty())
	{
		std::cout << "[ Do you say something? ]" <<std::endl;
		return ;
	}
	
	std::string levels[] = { "debug", "info", "warning", "error"};
	i = 0;
	while (i < 4 && levels[i].compare(level))
		i++;
	switch (i)
	{
		case 0:
			display_message(0);
			break;
		case 1:
			display_message(1);
			break;
		case 2:
			display_message(2);
			break;
		case 3:
			display_message(3);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
