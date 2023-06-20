/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 08:38:33 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/20 08:38:34 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook(void)
{
	this->_index = 0;
	this->_total = 0;
	std::cout << "Welcome to \"The PhoneBook\"" << std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "See you soon!" << std::endl;
}

std::string trim(std::string str)
{
	size_t	start;
	size_t	end;

	start = 0;
	while (start < str.length() && std::isspace(str[start]))
		start++;
	end = str.length() - 1;
	while (end > start && std::isspace(str[end]))
		end--;
	return (str.substr(start, end - start + 1));
}

bool	Phonebook::is_number(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
		if (isdigit(str[i]) == false)
			return (false);
	return (true);
}

std::string	Phonebook::get_info(std::string field)
{
	std::string str;
	do {
  		std::cout << field <<":";
		std::getline(std::cin, str);
	} while  (str.empty() || (is_number(str) == false && field == "Phone number"));
	
	return (trim(str));
}

void	Phonebook::add_contact(void)
{
	this->_my_vector[this->_index].set_first_name(this->get_info("Name"));
	this->_my_vector[this->_index].set_last_name(this->get_info("Last name"));
	this->_my_vector[this->_index].set_nickname(this->get_info("Nickname"));
	this->_my_vector[this->_index].set_phone_number(this->get_info("Phone number"));
	this->_my_vector[this->_index].set_darkest_secret(this->get_info("Darkest secret"));
	this->_index++;
	this->_total++;
	if (this->_index == 8)
		this->_index = 0;
}

void	Phonebook::display_menu(void)
{
	int	i;

	i = 0;
	std::cout << "------------------------------------------------" << std::endl;
	while (i < 8)
	{
		std::cout  << "|" <<  std::setw(10) << i + 1 << "|";
		this->_my_vector[i].display_contact();
		i++;
	}
	std::cout << "------------------------------------------------" << std::endl;
	
}

void	Phonebook::search_contact(void)
{
	display_menu();
	std::string str;
	std::cout << "Select index: ";
	std::getline(std::cin, str);
	if (is_number(str) == false || std::stoi(str) < 1 || std::stoi(str) > 8)
	{
		std::cout << "Invalid index!" << std::endl;
		return ;
	}
	if (std::stoi(str) <= this->_total)
		this->_my_vector[std::stoi(str) - 1].display_info();
	else 
		std::cout << "Invalid index!" << std::endl;
}
