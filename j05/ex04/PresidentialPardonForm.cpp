/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:12:16 by jochang           #+#    #+#             */
/*   Updated: 2018/10/08 22:12:17 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardon", 25, 5)
{
	_target = "default";
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 25, 5)
{
	_target = target;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy)
{ *this = cpy; }
PresidentialPardonForm::~PresidentialPardonForm(void) { }
PresidentialPardonForm&	PresidentialPardonForm::operator = (const PresidentialPardonForm &) { return (*this); }

void	PresidentialPardonForm::execute(Bureaucrat const &b) const
{
	if (this->getSigned())
	{
		if (b.getGrade() <= this->getGradeToExecute())
			std::cout << b.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		else
			throw GradeTooLowException();
	}
	else
		throw UnsignedException();
}
