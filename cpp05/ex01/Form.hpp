/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:18:45 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 17:18:46 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		const unsigned int	_grade_sign;
		const unsigned int	_grade_execute;
		Form();
	public:
		Form(std::string name, unsigned int grade_sign);
		Form(const Form& copy);
		~Form();
		Form& operator=(const Form& rhs);
		std::string		getName() const ;
		bool			getIsSigned()const ;
		unsigned int	getSign()const ;
		unsigned int	getExecute()const ;
		bool			beSigned(const Bureaucrat& Bureaucrat);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const  char* what() const throw()
				{
					return ("Grade too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const  char* what() const throw()
				{
					return ("Grade too low");
				}
		};
};
std::ostream& operator<<(std::ostream& o, const Form& rhs);
#endif