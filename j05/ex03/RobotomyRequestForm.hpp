/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:04:13 by jochang           #+#    #+#             */
/*   Updated: 2018/10/08 22:04:14 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string	_target;
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string name);
	RobotomyRequestForm(const RobotomyRequestForm &cpy);
	~RobotomyRequestForm(void);
	RobotomyRequestForm& operator = (const RobotomyRequestForm &old);

	std::string	getTarget(void)				const;
	void		execute(Bureaucrat const &) const;
};

#endif
