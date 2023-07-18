
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:18:45 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 17:18:46 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span() : _n(0) {}


Span::Span(unsigned int n)
{
	this->_n = n;
}

Span::Span(std::list<int>::iterator begin, std::list<int>::iterator end)
{
	this->_v.insert(this->_v.begin(), begin, end);
	this->_n = this->_v.size();
}

Span::Span(Span const & src)
{
	*this = src;
}

Span::~Span() {}

Span& Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		this->_n = rhs._n;
		this->_v = std::list<int>(rhs._v.begin(), rhs._v.end());
	}
	return (*this);
}

void Span::addNumber(int number)
{
	if (_v.size() < this->_n)
		this->_v.push_back(number);
	else
		throw std::runtime_error("Container is full");
}


int	Span::shortestSpan()
{
	if (this->_v.size() < 2)
		throw std::runtime_error("Not enough values in container");
	std::list<int> tmp(this->_v.begin(), this->_v.end());
	tmp.sort();
	int min = std::abs(tmp.front() - tmp.back());
	for (std::list<int>::iterator it = tmp.begin(); it != tmp.end(); it++)
	{
		std::list<int>::iterator it2 = it;
		it2++;
		for(; it2 != tmp.end(); it2++)
		{
			if (std::abs(*it - *it2) < min)
				min = std::abs(*it - *it2);
		}
	}
	return (min);
}

int	Span::longestSpan()
{
	if (this->_v.size() < 2)
		throw std::runtime_error("Not enough values in container");
	std::list<int> tmp(this->_v.begin(), this->_v.end());
	tmp.sort();
	return (std::abs(tmp.front() - tmp.back()));
}