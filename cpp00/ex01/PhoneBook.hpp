/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 08:38:40 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/20 08:38:41 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <stdbool.h>
# include <algorithm>

class Phonebook
{
	private:
		Contact _my_vector[8];
		int     _index;
		int		_total;
		std::string get_info(std::string field);
		void display_menu(void);

	public:
		Phonebook(void);
		~Phonebook(void);
		bool	is_number(std::string str);
		void    add_contact(void);
		void    search_contact(void);
};
#endif
