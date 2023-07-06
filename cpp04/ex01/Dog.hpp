/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:25:56 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/23 17:25:58 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	private:	
		Brain	*_brain;
	public:
		Dog(void);
		Dog(const Dog &src);
		Dog&	operator=(const Dog& rhs);
		~Dog(void);
		void makeSound(void) const;
};

#endif
