/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:18:51 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 17:18:51 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <algorithm>
# include <map>
#include <fstream>
#include <sstream>
#include <tgmath.h> 

class BitcoinExchange 
{
	private:
		std::map<std::string, float> _a;
		std::fstream	_file;
		std::string	saveDate(std::string word);
		float	saveAmount(std::string word);
		float	saveAmountCSV(std::string word);
		void	readFileData();
		void	getValueAmount(std::string date, float values);
		bool	correctDate(std::string date);
		double	power(double base, int exponente);
		BitcoinExchange &operator=(BitcoinExchange const &rhs);
		BitcoinExchange(BitcoinExchange const &src);
	public:
		BitcoinExchange();
		~BitcoinExchange();
		void	validFile(char *file);
		void	readFile();	
};