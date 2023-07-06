/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 07:36:45 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/25 07:36:46 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
	public:
		WrongCat(void);
		WrongCat(const WrongCat &src);
		WrongCat	&operator=(const WrongCat &rhs);
		~WrongCat(void);
		void		makeSound(void) const;
		std::string	getType(void) const;
};
#endif
