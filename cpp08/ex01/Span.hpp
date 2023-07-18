
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

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <ctime> 

#ifndef SPAN_HPP
# define SPAN_HPP

class Span {
	private:
		unsigned int	_n;
		std::list<int>	_v;
		Span();
	public:
		Span(unsigned int n);
		Span(Span const & src);
		Span(std::list<int>::iterator begin, std::list<int>::iterator end);
		~Span();
		Span &		operator=(Span const & rhs);
		void		addNumber(int n);
		int			shortestSpan(void);
		int			longestSpan(void);
};
std::ostream &		operator<<(std::ostream & o, Span const & i);
#endif