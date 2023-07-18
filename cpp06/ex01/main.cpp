/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:18:51 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/22 17:18:51 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include <stdint.h>


struct Data
{
	std::string content;
};

uintptr_t serialize(Data *ptr)
{
  return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
  return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data *data = new Data;
	data->content = "Hello world!!";
	
	std::cout << data->content << std::endl;
	uintptr_t aux = serialize(data);
	std::cout << deserialize(aux)->content << std::endl;

	std::cout << deserialize(serialize(data))->content << std::endl;

	delete data;
	return (0);
}
