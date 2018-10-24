/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 23:51:45 by jochang           #+#    #+#             */
/*   Updated: 2018/10/08 23:51:46 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

//#include <string>
//#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	std::string	_ftype;
	std::string	_ttype;
public:
	Intern(void);
	Intern(const Intern &cpy);
	~Intern(void);
	Intern&	operator = (const Intern &old);

	Form*	makeForm(std::string ftype, std::string ttype);

	class	InvalidFormException : public std::exception
	{
	public:
		InvalidFormException(void);
		InvalidFormException(const InvalidFormException &cpy);
		~InvalidFormException(void) throw();
		InvalidFormException& operator = (const InvalidFormException &old);
		virtual const char* what() const throw();
	};
};

#endif
