/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 08:38:23 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/20 08:38:24 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

std::string trim_spaces(const std::string& str) {
	std::size_t first = str.find_first_not_of(' ');
	std::size_t last = str.find_last_not_of(' ');

	if (first == std::string::npos || last == std::string::npos)
		return "";
	return str.substr(first, last - first + 1);
}

int main(void)
{
	Phonebook	my_phonebook;
	std::string	str;

	str = "";
	while (str != "EXIT")
	{
		std::cout << "Please enter a command(ADD,SEARCH,EXIT): ";
		std::getline(std::cin, str);
		if (trim_spaces(str) == "ADD")
			my_phonebook.add_contact();
		else if (trim_spaces(str) == "SEARCH")
			my_phonebook.search_contact();
		else if (trim_spaces(str) == "EXIT")
			std::cout << "Goodbye!" << std::endl;
		else
			std::cout << "Invalid command!" << std::endl;
	}
	return (0);
}
