/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:54:02 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/20 14:54:03 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

#include <iostream>
#include <fstream>
#include <iostream>
#include <string>

class File
{
	private:
		std::string _name;
		std::string _string1;
		std::string _string2;
	public:
		File(void);
		File(const File& s);
		~File(void);
		void replace(void);
		void setName(std::string name);
		void setStrings(std::string string1,std::string string2);
};

#endif
