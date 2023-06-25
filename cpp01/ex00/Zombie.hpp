/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:31:12 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/20 14:31:13 by ralopez-         ###   ########.fr       */
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
		Zombie(std::string name);
		Zombie(const Zombie& s);
		~Zombie(void);
		void announce(void);
		Zombie *newZombie(std::string name);
		void randomChump(std::string name);
};


Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
