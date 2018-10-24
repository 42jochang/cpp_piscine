/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 14:05:26 by jochang           #+#    #+#             */
/*   Updated: 2018/10/09 14:05:27 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void) : _intern(nullptr), _b_sign(nullptr), _b_exec(nullptr) { }
OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *b_sign, Bureaucrat *b_exec) :
_intern(intern), _b_sign(b_sign), _b_exec(b_exec) { }
OfficeBlock::~OfficeBlock(void) { }
OfficeBlock& OfficeBlock::operator = (const OfficeBlock &) { return *this; }

Intern*		OfficeBlock::getIntern(void)	const { return (_intern); }
Bureaucrat*	OfficeBlock::getSigner(void)	const { return (_b_sign); }
Bureaucrat*	OfficeBlock::getExecutor(void)	const { return (_b_exec); }

void	OfficeBlock::setIntern(Intern &intern)			{ _intern = &intern; }
void	OfficeBlock::setSigner(Bureaucrat &b_sign)		{ _b_sign = &b_sign; }
void	OfficeBlock::setExecutor(Bureaucrat &b_exec)	{_b_exec = &b_exec; }
void	OfficeBlock::doBureaucracy(std::string ftype, std::string ttype)
{
	Form* form;

	try
	{
		if (_intern)
			form = _intern->makeForm(ftype, ttype);
		else
			throw NoInternException();
		if (_b_sign)
			_b_sign->signForm(*form);
		else
			throw NoSignerException();
		if (_b_exec)
			_b_exec->executeForm(*form);
		else
			throw NoExecutorException();
	}
	catch (std::exception &e) { PRINT(e.what()); }
}

bool	OfficeBlock::emptySigner(void)	{ return (_b_sign == nullptr ? true : false); }
bool	OfficeBlock::emptyExec(void)	{ return (_b_exec == nullptr ? true : false); }


OfficeBlock::NoInternException::NoInternException(void) { }
OfficeBlock::NoInternException::NoInternException(const NoInternException &cpy) { *this = cpy; }
OfficeBlock::NoInternException::~NoInternException(void) throw() { }
OfficeBlock::NoInternException& OfficeBlock::NoInternException::operator = (const NoInternException&) { return (*this); }
const char* OfficeBlock::NoInternException::what() const throw() { return ("Error: No intern to process the form"); }

OfficeBlock::NoSignerException::NoSignerException(void) { }
OfficeBlock::NoSignerException::NoSignerException(const NoSignerException &cpy) { *this = cpy; }
OfficeBlock::NoSignerException::~NoSignerException(void) throw() { }
OfficeBlock::NoSignerException& OfficeBlock::NoSignerException::operator = (const NoSignerException&) { return (*this); }
const char* OfficeBlock::NoSignerException::what() const throw() { return ("Error: No bureaucrat to sign"); }

OfficeBlock::NoExecutorException::NoExecutorException(void) { }
OfficeBlock::NoExecutorException::NoExecutorException(const NoExecutorException &cpy) { *this = cpy; }
OfficeBlock::NoExecutorException::~NoExecutorException(void) throw() { }
OfficeBlock::NoExecutorException& OfficeBlock::NoExecutorException::operator = (const NoExecutorException&) { return (*this); }
const char* OfficeBlock::NoExecutorException::what() const throw() { return ("Error: No bureaucrat to execute"); }
