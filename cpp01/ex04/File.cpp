/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:53:56 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/20 14:53:56 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(void)
{
	return ;
}

File::File(const File& s)
{
	*this = s;
	return ;
}

File::~File(void)
{
	return ;
}

void	File::setName(std::string name)
{
	this->_name = name;
}

void	File::setStrings(std::string s1, std::string s2)
{
	this->_string1 = s1;
	this->_string2 = s2;
}

std::string replaceAll(const std::string& str, const std::string& from, const std::string& to)
{
	std::string result = str;
	size_t startPos = 0;
	while ((startPos = result.find(from, startPos)) != std::string::npos)
	{
		result = result.substr(0, startPos) + to + result.substr(startPos + from.length());
		startPos += to.length();
	}
	return result;
}

void	File::replace(void)
{
	std::string line;
	
 	std::ifstream file(this->_name);
	if (!file) {
		std::cout << "File not found"<<std::endl;
	}
	else {
		std::ofstream output(this->_name + ".replace");
		std::cout << "Replacing " << this->_string1 << " for "<< this->_string2 << std::endl;
		while(getline(file, line))
		{ 
			std::string modifiedLine = replaceAll(line, this->_string1, this->_string2);
			output << modifiedLine << "\n";
		}
		output.close();
		file.close(); 
	}
}
