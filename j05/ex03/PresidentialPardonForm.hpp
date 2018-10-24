/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:12:22 by jochang           #+#    #+#             */
/*   Updated: 2018/10/08 22:12:23 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string	_target;
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string name);
	PresidentialPardonForm(const PresidentialPardonForm &cpy);
	~PresidentialPardonForm(void);
	PresidentialPardonForm& operator = (const PresidentialPardonForm &old);

	std::string	getTarget(void)				const;
	void		execute(Bureaucrat const &) const;
};

#endif
