/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:29:04 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 00:26:00 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <sstream>

class	Victim
{
protected:
	std::string	_name;

public:
	Victim(void);
	Victim(std::string name);
	Victim(const Victim &cpy);
	virtual ~Victim(void);

	Victim&	operator = (const Victim &old);

	std::string		getname(void)			const;
	virtual void	getPolymorphed(void)	const;
};

std::ostream&	operator << (std::ostream &output, Victim const &old);

#endif
