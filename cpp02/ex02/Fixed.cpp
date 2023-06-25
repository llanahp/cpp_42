/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:03:57 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 11:03:58 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_number = 0;
}

Fixed::Fixed(const int number)
{
	this->_number = number << this->_bist;
}

Fixed::Fixed(const float number)
{
	this->_number = roundf(number * (1 << this->_bist));
}

Fixed::Fixed(const Fixed& fixed)
{
	this->setRawBits(fixed.getRawBits());
}

Fixed::~Fixed(void)
{
}

float Fixed::toFloat(void) const
{
	return ((float)this->_number / (float)(1 << this->_bist));
}

int Fixed::toInt(void) const
{
	return (this->_number >> this->_bist);
}

void Fixed::setRawBits(int const raw)
{
	this->_number = raw;
}

int Fixed::getRawBits(void) const
{
	return (this->_number);
}

bool	Fixed::operator>(Fixed other) const
{
	return (this->toFloat() > other.toFloat());
}

bool	Fixed::operator<(Fixed other) const
{
	return (this->toFloat() < other.toFloat());
}

bool	Fixed::operator>=(Fixed other) const
{
	return (this->toFloat() >= other.toFloat());
}

bool	Fixed::operator<=(Fixed other) const
{
	return (this->toFloat() <= other.toFloat());
}

bool	Fixed::operator==(Fixed other) const
{
	return (this->toFloat() == other.toFloat());
}

bool	Fixed::operator!=(Fixed other) const
{
	return (this->toFloat() != other.toFloat());
}

float	Fixed::operator+(Fixed other) const
{
	return (this->toFloat() + other.toFloat());
}
float	Fixed::operator-(Fixed other) const
{
	return (this->toFloat() - other.toFloat());
}
float	Fixed::operator*(Fixed other) const
{
	return (this->toFloat() * other.toFloat());
}
float	Fixed::operator/(Fixed other) const
{
	return (this->toFloat() / other.toFloat());
}

Fixed	Fixed::operator++(void)
{
	this->_number++;
	return (*this);
}

Fixed	Fixed::operator--(void)
{
	this->_number--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->_number;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->_number;
	return (tmp);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2) 
{
	if (f1.toFloat() <= f2.toFloat())
		return (f1);
	return (f2);
}

const Fixed& Fixed::min(Fixed const &f1, Fixed const &f2) 
{
	if (f1.toFloat() <= f2.toFloat())
		return (f1);
	return (f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2) 
{
	if (f1.toFloat() >= f2.toFloat())
		return (f1);
	return (f2);
}

const Fixed& Fixed::max(Fixed const &f1, Fixed const &f2) 
{
	if (f1.toFloat() >= f2.toFloat())
		return (f1);
	return (f2);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

Fixed &Fixed::operator=(const Fixed& other)
{
	 if (this != &other)
        this->_number = other.getRawBits();
    return *this;
}
