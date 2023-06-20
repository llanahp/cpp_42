/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 08:37:35 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/20 08:38:01 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void    Contact::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
}

void    Contact::set_last_name(std::string last_name)
{
	this->_last_name = last_name;
}

void    Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

void    Contact::set_phone_number(std::string phone_number)
{
	this->_phone_number = phone_number;
}

void   Contact::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

void Contact::display_info(void)
{
	std::cout << "Name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
}

void Contact::display_contact(void)
{
	if (this->_first_name.length() > 10)
		std::cout << std::setw(10) << this->_first_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(11) << this->_first_name << "|";
	if (this->_last_name.length() > 10)
		std::cout << std::setw(10) << this->_last_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(11) << this->_last_name << "|";
	if (this->_nickname.length() > 10)
		std::cout << std::setw(10) << this->_nickname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(11) << this->_nickname << "|";
	std::cout << std::endl;
}
