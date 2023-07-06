/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:18:45 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 17:18:46 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"


class Bureaucrat;

class AForm
{
	private:
		std::string const	_name;
		bool				_signed;
		const unsigned int	_grade_sign;
		const unsigned int	_grade_execute;
		std::string			_target;
		AForm();
		virtual void beExecuted() const;
	public:
		AForm(std::string name, unsigned int grade_sign);
		AForm(std::string name, unsigned int grade_sign, unsigned int grade_execute);
		AForm(const AForm& copy);
		virtual ~AForm() =0;
		AForm& operator=(const AForm& rhs);
		std::string		getName() const ;
		bool			getIsSigned()const ;
		unsigned int	getSign()const ;
		unsigned int	getExecute()const ;
		bool			beSigned(const Bureaucrat& Bureaucrat) ;
		void			setName(std::string name) ;
		void			setIsSigned(bool state)const ;
		void			setSign(int level)const ;

		
		void 			execute(Bureaucrat const & executor) const ;
		std::string		getTarget() const;
		void			setTarget(std::string target);
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
std::ostream& operator<<(std::ostream& o, const AForm& rhs);
#endif