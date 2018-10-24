/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 23:51:51 by jochang           #+#    #+#             */
/*   Updated: 2018/10/08 23:51:52 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

#define OUTPUT(x) std::cout << "Intern creates " << x << " form" << std::endl

Intern::Intern(void) { }
Intern::Intern(const Intern &cpy) { *this = cpy; }
Intern::~Intern(void) { }
Intern&	Intern::operator = (const Intern &) { return (*this); }

Form*	Intern::makeForm(std::string ftype, std::string ttype)
{
	if (ftype == "shrubbery")
	{
		OUTPUT(ftype);
		return (new ShrubberyCreationForm(ttype));
	}
	else if (ftype == "robotomy")
	{
		OUTPUT(ftype);
		return (new RobotomyRequestForm(ttype));
	}
	else if (ftype == "pardon")
	{
		OUTPUT(ftype);
		return (new PresidentialPardonForm(ttype));
	}
	else
		throw Intern::InvalidFormException();
	return (nullptr);
}

Intern::InvalidFormException::InvalidFormException(void) { }
Intern::InvalidFormException::InvalidFormException(const InvalidFormException &cpy) { *this = cpy; }
Intern::InvalidFormException::~InvalidFormException(void) throw() { }
Intern::InvalidFormException& Intern::InvalidFormException::operator = (const InvalidFormException&) { return (*this); }
const char* Intern::InvalidFormException::what() const throw() { return ("Error: form type not found"); }
