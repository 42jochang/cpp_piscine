/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 20:59:17 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 00:24:02 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <sstream>
#include "Peon.hpp"

class	Sorcerer
{
private:
	/* Variables */
	std::string	_name;
	std::string	_title;

public:
	/* Canonical Member Functions */
	Sorcerer(void);
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer &cpy);
	~Sorcerer(void);

	/* Operator Overloads */
	Sorcerer&	operator = (const Sorcerer &old);
	

	/* Get Functions */
	std::string	getname(void)	const;
	std::string	gettitle(void)	const;
	void		polymorph(Victim const &);
};

std::ostream&	operator << (std::ostream &output, Sorcerer const &old);

#endif
