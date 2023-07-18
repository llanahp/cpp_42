/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:18:51 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 17:18:51 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

void BitcoinExchange::validFile(char* file)
{
	if (file == NULL)
		throw std::runtime_error("Error: could not open file.");
	this->_file.open(file, std::ios::in);
	if (this->_file.is_open())
		return ;
	else
		throw std::runtime_error("Error: could not open file.");
}

double BitcoinExchange::power(double base, int exponente)
{
    if (exponente == 0)
        return 1.0;
    bool negativo = false;
    if (exponente < 0)
	{
        negativo = true;
        exponente = -exponente;
    }
    double resultado = 1.0;
    while (exponente > 0)
	{
        if (exponente % 2 == 1)
            resultado *= base;

        exponente /= 2;
        base *= base;
    }
	if (negativo)
		return 1.0 / resultado;
	else
		return resultado;
}


bool BitcoinExchange::correctDate(std::string date)
{
	int year = 0;
	int month = 0;
	int day = 0;
	int i = 0;
	while(date[i] && date[i] != '-')
		i++;
	int j = 0;
	while (i != j)
	{
		year += ((date[j] - 48) * power(10, i - 1 - j));
		j++;
	}
	if (date[i] && date[i] == '-')
		i++;
	j = i;
	while(date[i] && date[i] != '-')
		i++;
	while (i != j)
	{
		month += ((date[j] - 48) * power(10, i - 1 - j));
		j++;
	}
	if (month > 12)
		return (false);
	if (date[i] && date[i] == '-')
		i++;
	j = i;
	while(date[i] && date[i] != ' ')
		i++;
	while (i != j)
	{
		day += ((date[j] - 48) * power(10, i - 1 - j));
		j++;
	}
	int daysInMonth = 31; 
    if (month == 2)
	{ 
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
            daysInMonth = 29; 
        else 
            daysInMonth = 28;
    }
	else if (month == 4 || month == 6 || month == 9 || month == 11)
        daysInMonth = 30;
    if (day < 1 || day > daysInMonth)
	{
        return (false);
	}
	return (true);
}

std::string	BitcoinExchange::saveDate(std::string word)
{
	std::string date = word;
	int i=0;
	for(; (date[i] && date[i] != '-'); i++)
	{
		if (isdigit(date[i]) == false)
			throw std::runtime_error("Error: bad input => ");
	}
	if (date[i] && date[i]=='-')
		i++;
	else
		throw std::runtime_error("Error: bad input => ");
	for(; (date[i] && date[i] != '-'); i++)
	{
		if (isdigit(date[i]) == false)
			throw std::runtime_error("Error: bad input => ");
	}
	if (date[i] && date[i]=='-')
		i++;
	else
		throw std::runtime_error("Error: bad input => ");
	for(; (date[i] && date[i] != ' '); i++)
	{
		if (isdigit(date[i]) == false)
			throw std::runtime_error("Error: bad input => ");
	}
	while( (date[i] && date[i] == ' '))
		i++;
	if (date[i] != '\0')
		throw std::runtime_error("Error: bad input => ");
	if (correctDate(date) == false)
		throw std::runtime_error("Error: bad input => ");
	return (date);
}

float	BitcoinExchange::saveAmountCSV(std::string word)
{
	std::string value = word;
	int i=0;
	for (; value[i] != '\0'; i++)
	{
		if (isdigit(value[i] == false) && value[i] != '.')
			throw std::runtime_error("Error: bad input => ");
	}
	float f = std::atof(value.c_str());
	return (f);
}

float	BitcoinExchange::saveAmount(std::string value)
{
	int i = 0;
	int	dot = 0;
	if (value[i] != '\0' && value[i] == ' ')
		i++;
	if (value[i] == '\0'  || value[i] == ' ')
		throw std::runtime_error("Error: bad input => ");
	if (value[i] != '\0' && value[i] == '-')
		throw std::runtime_error("Error: not a positive number.");
	for (; value[i] != '\0'; i++)
	{
		if ((isdigit(value[i]) == false && value[i] != '.')
			|| (isdigit(value[i]) == false && value[i] == '.' && dot == 1))
			throw std::runtime_error("Error: bad input => ");
		if (value[i] == '.' && dot == 0)
			dot = 1;
	}
	float f = std::atof(value.c_str());
	if (f > 1000)
		throw std::runtime_error("Error: too large a number.");
	return (f);
}

void	BitcoinExchange::readFileData()
{
	std::string line;
	int i = 0;
	std::fstream fileHistory;
	fileHistory.open("data.csv", std::ios::in);
	std::string date;
	getline(fileHistory, line);
	while(getline(fileHistory, line))
	{
		try
		{
			int j = 0;
			float values;
			std::stringstream str(line);
			std::string word;
			while(std::getline(str, word, ','))
			{
				if (j == 0)
					date = saveDate(word);
				if (j == 1)
					values = saveAmountCSV(word);
				j++;
			}
			if (j != 2)
				throw std::runtime_error("Error: bad input => ");
			else
				this->_a.insert(std::pair<std::string,float>(date, values));
			i++;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

void	BitcoinExchange::getValueAmount(std::string date, float values)
{
	std::map<std::string, float>::const_iterator it;
	std::string prev = "";
	float f = 0;
	for (it = this->_a.begin(); it != this->_a.end(); ++it)
	{
		if (prev == "")
			prev = it->first;
		if (it->first <= date && prev <= it->first)
		{
			prev =it->first;
			f = it->second;
		}
	}
	std::cout << (values * f);
}

void	BitcoinExchange::readFile()
{
	readFileData();
	std::string line;
	std::string date;
	int i = 0;
	getline(this->_file, line);
	while(getline(this->_file, line))
	{
		try
		{
			int j = 0;
			float values;
			std::stringstream str(line);
			std::string word;
			while(std::getline(str, word, '|'))
			{
				if (j == 0)
					date = saveDate(word);
				if (j == 1)
					values = saveAmount(word);
				j++;
			}
			if (j != 2)
				throw std::runtime_error("Error: bad input => ");
			else
			{
				std::cout << date << " => " << values << " = ";
				getValueAmount(date, values);
				std::cout << std::endl;
			}
			i++;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	if (this != &rhs)
	{
		this->_a = rhs._a;
	}
	return (*this);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
	*this = src;
}
