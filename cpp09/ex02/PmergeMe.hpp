/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:12:02 by ralopez-          #+#    #+#             */
/*   Updated: 2023/07/08 14:12:03 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <algorithm>
# include <vector>
# include <deque>
#include <ctime>
#include <iomanip>
#include <sys/time.h>
#include <sstream>

class PmergeMe
{
	private:
		std::vector<int>	_vector;
		std::deque<int>		_deque;
		bool				areNumbers(char *str);
		std::vector<int>	mergeVector(std::vector<int> vector);
		std::deque<int>		mergeDeque(std::deque<int> deque);
		void				displayVector(std::vector<int> vector);
		void				displayDeque(std::deque<int> deque);
		void				displayTime(std::clock_t start, std::clock_t end, int argc);
		int	strToInt(std::string str);
		PmergeMe(const PmergeMe &src);
		PmergeMe &operator=(const PmergeMe &rhs);
	public:
		PmergeMe();
		~PmergeMe();
		void	shortVector(char **argv, int argc);
		void	shortDeque(char **argv, int argc);
};