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
# include <cstdlib>
# include <ctime>

class 	Base
{
	public:
		virtual ~Base() {};
};

class A: public Base
{
};

class B: public Base
{
};

class C: public Base
{
};

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout <<"A"<<std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout <<"B"<<std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout <<"C"<<std::endl;
	else
		std::cout <<"?"<<std::endl;
}

Base *generate(void)
{	
	int i;

	i = std::rand() % 3;
	switch (i)
	{
		case 0:
			return (new A);
			break;
		case 1:
			return (new B);
			break;
		case 2:
			return (new C);
			break;
		default:
			return (new C);
			break;
	}
}

int main()
{
	std::srand(std::time(0));
    Base*   a = generate();
    Base*   b = generate();
    Base*   c = generate();

	identify(a);
	identify(b);
	identify(c);

	delete a;
	delete b;
	delete c;

	return (0);
}
