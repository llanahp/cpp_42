/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:50:59 by ralopez-          #+#    #+#             */
/*   Updated: 2023/06/25 14:51:00 by ralopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("ShrubberyCreationForm", 145, 137)
{
	this->setTarget("Default");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target): AForm("ShrubberyCreationForm", 145, 137)
{
	this->setTarget(target);
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy): AForm(copy.getName(),copy.getSign(),copy.getExecute())
{
	this->setTarget(copy.getTarget());
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		this->setTarget(rhs.getTarget());
	}
	return (*this);
}




void	ShrubberyCreationForm::beExecuted() const
{
	std::ofstream	ofs;
	std::string		filename;

	filename = this->getTarget() + "_shrubbery";
	ofs.open(filename.c_str());
	if (ofs.is_open())
	{
		ofs << "       _-_" << std::endl;
		ofs << "    /~~   ~~\\" << std::endl;
		ofs << " /~~         ~~\\" << std::endl;
		ofs << "{               }" << std::endl;
		ofs << " \\  _-     -_  /" << std::endl;
		ofs << "   ~  \\\\ //  ~" << std::endl;
		ofs << "_- -   | | _- _" << std::endl;
		ofs << "  _ -  | |   -_" << std::endl;
		ofs << "      // \\\\" << std::endl;
		ofs << "     //   \\\\" << std::endl;
		ofs << "    //     \\\\" << std::endl;
		ofs << "   //       \\\\" << std::endl;
		ofs << "  //         \\\\" << std::endl;
		ofs << " //           \\\\" << std::endl;
		ofs << "//             \\\\" << std::endl;
		ofs << "||             ||" << std::endl;
		ofs << "||             ||" << std::endl;
		ofs << "||             ||" << std::endl;
		ofs << "||             ||" << std::endl;
		ofs << "||_____________||" << std::endl;
		ofs << "|_______________|" << std::endl;
		ofs << " \\_____________/" << std::endl;
		ofs.close();
	}
	else
		std::cout << "Error: could not open file" << std::endl;
}
