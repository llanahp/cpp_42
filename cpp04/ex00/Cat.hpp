/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:32:13 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/23 17:32:14 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	private:
	public:
		Cat(void);
		Cat(const Cat &src);
		Cat&	operator=(const Cat& rhs);
		~Cat(void);
		virtual void	makeSound(void) const;
};
#endif