
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:18:45 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 17:18:46 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	Convert::reset()
{
	this->_char = 0;
	this->_int = 0;
	this->_float = 0;
	this->_double = 0;
}

void	Convert::toFloat(float f)
{
	this->_float = static_cast<float>(f);
	if (this->_float - (int)this->_float != (float)0)
		std::cout << "float: " << this->_float << "f" << std::endl;
	else
		std::cout << "float: " << this->_float << ".0" << "f" << std::endl;
}

void	Convert::toInt(float f)
{
	this->_int = static_cast<int>(f);
	std::cout << "int: ";
	if (f == std::numeric_limits<float>::infinity() || f == -std::numeric_limits<float>::infinity()
			|| std::isnan(f))
		std::cout << "impossible" << std::endl;
	else 
		std::cout << this->_int << std::endl;
}

void	Convert::toDouble(float f)
{
	this->_double = static_cast<double>(f);
	if (this->_double - (int)this->_double != (double)0)
		std::cout << "double: " << this->_double << std::endl;
	else
		std::cout << "double: " << this->_double << ".0" << std::endl;
}

void	Convert::toChar(float f)
{
	this->_char = static_cast<char>(f);
	std::cout << "char: ";
	if (f == std::numeric_limits<float>::infinity() || f == -std::numeric_limits<float>::infinity()
			|| std::isnan(f))
		std::cout << "impossible" << std::endl;
	else if (this->_char < 32 || this->_char > 126)
		std::cout << "Non displayable"<<std::endl;
	else
		std::cout << "'" << this->_char << "'" << std::endl;
}

int	Convert::ft_strlen(std::string &str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

float Convert::transform(std::string &str)
{
	try
	{	
		if (ft_strlen(str) == 3
			&& ((str[0] == '\''	&& str[2] == '\'') || 
			(str[0] == '\"'	&& str[2] == '\"')))
			return (static_cast<float>(str[1]));
		return(std::atof(str.c_str()));
	}
	catch(const std::exception& e)
	{
		throw std::runtime_error("Error: convert");
	}
} 

void Convert::readInput(std::string& str) 
{
	this->reset();
	try
	{
		float trate = transform(str);
		toChar(trate);
		toInt(trate);
		toFloat(trate);
		toDouble(trate);
	}
	catch(std::exception& e)
	{
		std::cout << "Error" << e.what() << std::endl;
	}	
}