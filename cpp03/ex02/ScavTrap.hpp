/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 18:11:02 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 18:11:03 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		ScavTrap(void);
	public:
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& src);
		~ScavTrap(void);
		ScavTrap&	operator=(const ScavTrap& other);
		void		guardGate(void);
		void		attack(const std::string& target);
};

#endif