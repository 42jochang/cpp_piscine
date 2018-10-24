/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 11:52:10 by jochang           #+#    #+#             */
/*   Updated: 2018/10/08 18:47:20 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <stdexcept>
#include <sstream>
#include <iostream>

class	Bureaucrat
{
private:
	std::string	const	_name;
	int 				_grade;
public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &cpy);
	~Bureaucrat(void);
	Bureaucrat&	operator = (const Bureaucrat &old);

	std::string	getName(void)	const;
	int			getGrade(void)	const;

	void		upGrade(void);
	void		downGrade(void);

	class	GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(void);
		GradeTooHighException(const GradeTooHighException &cpy);
		~GradeTooHighException(void) throw();
		GradeTooHighException& operator = (const GradeTooHighException &old);
		virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(void);
		GradeTooLowException(const GradeTooLowException &cpy);
		~GradeTooLowException(void) throw();
		GradeTooLowException& operator = (const GradeTooLowException &old);
		virtual const char* what() const throw();
	};

};

std::ostream&	operator << (std::ostream &output, Bureaucrat const &old);

#endif
