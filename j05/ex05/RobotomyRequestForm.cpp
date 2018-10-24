/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:04:20 by jochang           #+#    #+#             */
/*   Updated: 2018/10/08 22:04:21 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <iostream>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequest", 72, 45)
{
	srand(time(NULL));
	_target = "default";
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45)
{
	_target = target;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy)
{ *this = cpy; }
RobotomyRequestForm::~RobotomyRequestForm(void) { }
RobotomyRequestForm&	RobotomyRequestForm::operator = (const RobotomyRequestForm &) { return (*this); }

void	RobotomyRequestForm::execute(Bureaucrat const &b) const
{
	if (this->getSigned())
	{
		if (b.getGrade() <= this->getGradeToExecute())
		{
			if (rand() % 2)
				std::cout << _target << " has been robotomized successfully" << std::endl;
			else
				std::cout << _target << " the robotomization has failed" << std::endl;
		}
		else
			throw GradeTooLowException();
	}
	else
		throw UnsignedException();
}
