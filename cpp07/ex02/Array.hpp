/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:18:45 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 17:18:46 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <math.h>

template <typename T>
class Array
{
	private:
		T	*_array;
		unsigned int _size;
	public:
		Array(void): _array(new T[0]), _size(0){};
		Array(unsigned int n): _array(new T[n]), _size(n){};
		Array(Array const & src): _array(new T[src._size]), _size(src._size)
		{
			for (unsigned int i = 0; i < src._size; i++)
				_array[i] = src._array[i];
		};
		Array &	operator=(Array const & rhs)
		{
			if (this != &rhs)
			{
				delete [] _array;
				_array = new T[rhs._size];
				_size = rhs._size;
				for (unsigned int i = 0; i < rhs._size; i++)
					_array[i] = rhs._array[i];
			}
			return (*this);
		};
		~Array(void)
		{
			delete [] _array; 
		};
		unsigned int	size(void) const
		{
			return (_size);
		};
		T&	operator[](unsigned int n)
		{
			if (n >= _size)
				throw std::runtime_error("Error: Out of bounds");
			return (_array[n]);
		};
};

template <typename T>
std::ostream &	operator<<(std::ostream & o, Array<T>  & rhs)
{
	o << "Array: ";
	for (unsigned int i = 0; i < rhs.size(); i++)
		o << rhs[i] << " ";
	o << std::endl;
	return (o);
};