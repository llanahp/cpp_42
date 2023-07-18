/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:11:57 by ralopez-          #+#    #+#             */
/*   Updated: 2023/07/08 14:11:58 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

std::vector<int> PmergeMe::mergeVector(std::vector<int> vector)
{
	int N = 2;

	if ((int)vector.size() > N)
	{
		int size = vector.size();
		std::vector<int> a;
		std::vector<int> b;
		std::vector<int> res;
		for (int i = 0; i < size; i++)
		{
			if (i < size / 2)
				a.push_back(vector.front());
			else
				b.push_back(vector.front());
			vector.erase(vector.begin());
		}
		a = mergeVector(a);
		b = mergeVector(b);
		while (!a.empty())
		{
			res.push_back(a.front());
			a.erase(a.begin());
		}
		while (!b.empty())
		{
			res.push_back(b.front());
			b.erase(b.begin());
		}
		int tmpSize = res.size();
		for (int i = 0; i < tmpSize; i++)
		{
			if (i > 0 && res[i] < res[i - 1])
			{
				int pos = 0;
				for (int j = 0; j < i; j++)
				{
					if (res[i] < res[j])
					{
						pos = j;
						break;
					}
				}
				res.insert(res.begin() + pos, res[i]);
				res.erase(res.begin() + i + 1);
			}
		}
		return (res);
	}
	else
	{
		int tmpSize = vector.size();
		for (int i = 0; i < tmpSize; i++)
		{
			if (i > 0 && vector[i] < vector[i - 1])
			{
				int pos = 0;
				for (int j = 0; j < i; j++)
				{
					if (vector[i] < vector[j])
					{
						pos = j;
						break;
					}
				}
				vector.insert(vector.begin() + pos, vector[i]);
				vector.erase(vector.begin() + i + 1);
			}
		}
		return (vector);
	}
}

std::deque<int>	PmergeMe::mergeDeque(std::deque<int> deque)
{
	int N = 2;
	
	if ((int)deque.size() > N)
	{
		int size = deque.size();
		std::deque<int> a;
		std::deque<int> b;
		std::deque<int> tmp;
		for (int i = 0; i < size; i++)
		{
			if (i < size / N)
				a.push_back(deque.front());
			else
				b.push_back(deque.front());
			deque.pop_front();
		}
		a = mergeDeque(a);
		b = mergeDeque(b);
		while (!a.empty())
		{
			tmp.push_back(a.front());
			a.pop_front();
		}
		while (!b.empty())
		{
			tmp.push_back(b.front());
			b.pop_front();
		}
		int tmpSize = tmp.size();
		for (int i = 0; i < tmpSize; i++)
		{
			if (i > 0 && tmp[i] < tmp[i - 1])
			{
				int pos = 0;
				for (int j = 0; j < i; j++)
				{
					if (tmp[i] < tmp[j])
					{
						pos = j;
						break;
					}
				}
				tmp.insert(tmp.begin() + pos, tmp[i]);
				tmp.erase(tmp.begin() + i + 1);
			}
		}
		return (tmp);
	}
	else
	{
		int tmpSize = deque.size();
		for (int i = 0; i < tmpSize; i++)
		{
			if (i > 0 && deque[i] < deque[i - 1])
			{
				int pos = 0;
				for (int j = 0; j < i; j++)
				{
					if (deque[i] < deque[j])
					{
						pos = j;
						break;
					}
				}
				deque.insert(deque.begin() + pos, deque[i]);
				deque.erase(deque.begin() + i + 1);
			}
		}
		return (deque);
	}
}

void	PmergeMe::shortVector(char **argv, int argc)
{
	int i;

	i = 1;
	while (argv[i])
	{
		if (areNumbers(argv[i]) == true)
		{	
			std::string input = argv[i];
			std::stringstream ss(input);
			std::string token;
			while (std::getline(ss, token, ' '))
				this->_vector.push_back(strToInt(token));
		}
		else
			throw std::runtime_error("Error: Invalid input.");
		i++;
	}
	std::clock_t start = std::clock();
	std::vector<int> res = mergeVector(this->_vector);
  	std::clock_t end = std::clock();
	displayTime(start, end, argc);
}

void	PmergeMe::shortDeque(char **argv, int argc)
{
	int i;

	i = 1;
	while (argv[i])
	{
		if (areNumbers(argv[i]) == true)
		{
			std::string input = argv[i];
			std::stringstream ss(input);
			std::string token;
			while (std::getline(ss, token, ' '))
				this->_deque.push_back(strToInt(token));
		}
		else
			throw std::runtime_error("Error: Invalid input.");
		i++;
	}
	std::cout << "Before: ";
	displayDeque(this->_deque);
	std::clock_t start = std::clock();
	std::deque<int> res = mergeDeque(this->_deque);
	std::clock_t end = std::clock();
	std::cout << "After: ";
	displayDeque(res);
	displayTime(start, end, argc);
}

bool PmergeMe::areNumbers(char *str)
{
	int i = 0;

	while (str[i] && (isdigit(str[i]) == true || str[i] == ' '))
		i++;
	return (str[i] == '\0');
}

int	PmergeMe::strToInt(std::string str)
{
	float number = std::atof(str.c_str());
	if (static_cast<int>(number) < 0)
		throw std::runtime_error("Error: Invalid input.");
	if (static_cast<int>(number) != (int)static_cast<unsigned long long int>(number))
		throw std::runtime_error("Error: Invalid input.");
	return (static_cast<int>(number));
}

void	PmergeMe::displayVector(std::vector<int> vector)
{
	int size = vector.size();
	for (int i = 0; i < size; i++)
	{
		std::cout << vector.back() << " ";
		vector.pop_back();
	}
	std::cout << std::endl;
}

void	PmergeMe::displayDeque(std::deque<int> deque)
{
	int size = deque.size();
	for (int i = 0; i < size; i++)
	{
		std::cout << deque.front() << " ";
		deque.pop_front();
	}
	std::cout << std::endl;
}

void	PmergeMe::displayTime(std::clock_t start, std::clock_t end, int argc)
{
	double elapsed = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;
	std::cout << "Time to process a range of "<< argc - 1 <<" elements with std::[..] : "
		  << std::fixed << std::setprecision(5) << elapsed << " us" << std::endl;
}

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &src)
{
	*this = src;
}

PmergeMe	&PmergeMe::operator=(PmergeMe const &rhs)
{
	if (this != &rhs)
	{
		this->_vector = rhs._vector;
		this->_deque = rhs._deque;
	}
	return (*this);
}