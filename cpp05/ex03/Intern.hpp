/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:18:45 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 17:18:46 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"


class Intern
{
	private:
		typedef struct	s_formList
		{
			std::string	formName;
			AForm		*formType;
		}				t_formList;
	
	public:
		Intern(void);
		Intern(const Intern& copy);
		Intern& operator=(const Intern& rhs);
		~Intern();
		class FormNotFoundException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form not found");
				}
		};
		AForm*	makeForm(std::string const name, std::string const target);
};

std::ostream	&operator<<( std::ostream &ostr, const Intern &instance );

#endif