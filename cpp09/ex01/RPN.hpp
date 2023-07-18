/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:18:38 by ralopez-          #+#    #+#             */
/*   Updated: 2023/07/08 13:18:39 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stack>
# include <iostream>
# include <algorithm>

class RPN
{
	private:
		std::stack<int> _stack;
		int		storeNumber(char *str, int i);
		RPN(RPN const & src);
		RPN &	operator=(RPN const & rhs);
	public:
		RPN();
		~RPN();
		void calculate(char *str);
};