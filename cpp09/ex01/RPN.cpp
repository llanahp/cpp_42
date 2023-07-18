/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:18:29 by ralopez-          #+#    #+#             */
/*   Updated: 2023/07/08 13:18:33 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

int	RPN::storeNumber(char *str, int i)
{
	int number = 0;
	if (str[i + 1] && isdigit(str[i + 1]) == true)
		throw std::runtime_error("Error: Number too big.");
	else
		number = str[i] - 48;
	this->_stack.push(number);
	if (number == 10)
		return (i + 2);
	else
		return (i + 1);
}

void	RPN::calculate(char *str)
{
	int i = 0;
	int a;
	int b;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			i++;
			continue;
		}
		if (isdigit(str[i]) == true)
			i = storeNumber(str, i);
		else
		{
			if (this->_stack.size() < 2)
				throw std::runtime_error("Error: insufficient operators.");
			b = this->_stack.top();
			this->_stack.pop();
			a = this->_stack.top();
			this->_stack.pop();
			switch (str[i])
			{
				case '+':
					this->_stack.push(a + b);
					break;
				case '-':
					this->_stack.push(a - b);
					break;
				case '*':
					this->_stack.push(a * b);
					break;
				case '/':
					if (b == 0)
						throw std::runtime_error("Error: division by zero.");
					this->_stack.push(a / b);
					break;
				default:
					throw std::runtime_error("Error: Operation not found.");
					break;
			}
			i++;
		}
	}
	if (this->_stack.size() == 1)
		std::cout << this->_stack.top() << std::endl;
	else if (this->_stack.size() > 1)
		throw std::runtime_error("Error: insufficient operators.");
	else
		throw std::runtime_error("Error");
}

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(RPN const & src)
{
	*this = src;
}

RPN &	RPN::operator=(RPN const & rhs)
{
	if (this != &rhs)
	{
		this->_stack = rhs._stack;
	}
	return (*this);
}
