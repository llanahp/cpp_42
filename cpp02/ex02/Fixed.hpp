/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:04:01 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 11:04:02 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		static const int	_bist = 8;
		int					_number;
	public:
		Fixed(void);
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed& fixed);
		~Fixed(void);
		float				toFloat(void) const;
		int					toInt(void) const;
		int					getRawBits(void) const;
		void				setRawBits (int const raw);
		Fixed&				operator=(const Fixed& otra);
		bool				operator>(Fixed other) const;
		bool				operator<(Fixed other) const;
		bool				operator>=(Fixed other) const;
		bool				operator<=(Fixed other) const;
		bool				operator==(Fixed other) const;
		bool				operator!=(Fixed other) const;
		float				operator+(Fixed other) const;
		float				operator-(Fixed other) const;
		float				operator*(Fixed other) const;
		float				operator/(Fixed other) const;
		Fixed				operator++();
		Fixed				operator--();
		Fixed				operator++(int);
		Fixed				operator--(int);
		static Fixed&		min(Fixed& a, Fixed& b);
		static const Fixed&	min(Fixed const &a, Fixed const &b);
		static Fixed&		max(Fixed& a, Fixed& b);
		static const Fixed&	max(Fixed const &a, Fixed const &b);
};
std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);
#endif
