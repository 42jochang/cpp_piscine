/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 14:09:05 by jochang           #+#    #+#             */
/*   Updated: 2018/10/09 14:09:06 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

#include "Intern.hpp"

#define PRINT(x) std::cout << x << std::endl

class OfficeBlock
{
private:
	Intern		*_intern;
	Bureaucrat	*_b_sign;
	Bureaucrat	*_b_exec;

public:
	OfficeBlock();
	OfficeBlock(Intern *intern, Bureaucrat *b_sign, Bureaucrat *b_exec);
	OfficeBlock(const OfficeBlock &cpy);
	~OfficeBlock();
	OfficeBlock& operator = (const OfficeBlock &old);

	void	setIntern(Intern &intern);
	void	setSigner(Bureaucrat &b_sign);
	void	setExecutor(Bureaucrat &b_exec);
	void	doBureaucracy(std::string ftype, std::string ttype);

	class	NoInternException : public std::exception
	{
	public:
		NoInternException(void);
		NoInternException(const NoInternException &cpy);
		~NoInternException(void) throw();
		NoInternException& operator = (const NoInternException &old);
		virtual const char* what() const throw();
	};

	class	NoSignerException : public std::exception
	{
	public:
		NoSignerException(void);
		NoSignerException(const NoSignerException &cpy);
		~NoSignerException(void) throw();
		NoSignerException& operator = (const NoSignerException &old);
		virtual const char* what() const throw();
	};

	class	NoExecutorException : public std::exception
	{
	public:
		NoExecutorException(void);
		NoExecutorException(const NoExecutorException &cpy);
		~NoExecutorException(void) throw();
		NoExecutorException& operator = (const NoExecutorException &old);
		virtual const char* what() const throw();
	};
};

#endif
