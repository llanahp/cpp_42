/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:03:24 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 11:03:24 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_number = 0;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->_number = number << this->_bist;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	this->_number = roundf(number * (1 << this->_bist));
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(fixed.getRawBits());
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
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
	std::cout << "Assignation operator called" << std::endl;
	this->_number = raw;
}

int Fixed::getRawBits(void) const
{
	return (this->_number);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

Fixed &Fixed::operator=(const Fixed& other)
{
	std::cout << "Assignation operator called" << std::endl;
	 if (this != &other)
        this->_number = other.getRawBits();
    return *this;
}
