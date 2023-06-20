/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 08:38:13 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/20 08:38:14 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP
# include <iostream>
# include <iomanip>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
	public:
		Contact(void);
		~Contact(void);
		void set_first_name(std::string first_name);
		void set_last_name(std::string last_name);
		void set_nickname(std::string nickname);
		void set_phone_number(std::string phone_number);
		void set_darkest_secret(std::string darkest_secret);
		void display_info(void);
		void display_contact(void);
};
#endif
