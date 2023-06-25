/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:51:43 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/20 14:51:44 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>


class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(void);
		Zombie(const Zombie& s);
		~Zombie(void);
		void announce(void);
		void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );
#endif
