/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 11:53:17 by jochang           #+#    #+#             */
/*   Updated: 2018/10/08 18:52:56 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150) { }
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : _name(cpy.getName()), _grade(cpy.getGrade())
{
	*this = cpy;
}
Bureaucrat::~Bureaucrat(void) { }
Bureaucrat&	Bureaucrat::operator = (const Bureaucrat &old)
{
	_grade = old.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName(void)	const { return (_name); }
int			Bureaucrat::getGrade(void)	const { return (_grade); }

void	Bureaucrat::upGrade(void)
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void	Bureaucrat::downGrade(void)
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void	Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << _name << " cannot sign " << form.getName()
		<< " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream	&operator << (std::ostream &output, Bureaucrat const &old)
{
	output << old.getName() << ", bureaucrat grade " << old.getGrade();
	return (output);
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) { }
Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &cpy) { *this = cpy; }
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() { } //try without throw in destructor, tell maya
Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator = (const GradeTooHighException&) { return (*this); }
const char* Bureaucrat::GradeTooHighException::what() const throw() { return ("Error: Grade too high"); }

Bureaucrat::GradeTooLowException::GradeTooLowException(void) { }
Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &cpy) { *this = cpy; }
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() { }
Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator = (const GradeTooLowException&) { return (*this); }
const char* Bureaucrat::GradeTooLowException::what() const throw() { return ("Error: Grade too low"); }
