/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:18:45 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 17:18:46 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <limits>
# include <cstdlib>
# include <cmath>

class Convert
{
	private:
		char	_char;
		int		_int;
		float	_float;
		double	_double;

		float	transform(std::string &str);
		void	toChar(float f);
		void	toInt(float f);
		void	toFloat(float f);
		void	toDouble(float f);
		int		ft_strlen(std::string &str);
		void	display();
		void	reset();
	public:
		void	readInput(std::string &str);
};
#endif