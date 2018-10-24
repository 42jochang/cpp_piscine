/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:56:49 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 00:26:58 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class	Peon : public Victim
{
public:
	Peon(void);
	Peon(std::string name);
	Peon(const Peon &cpy);
	virtual ~Peon(void);

	void	getPolymorphed(void) const;
};

#endif
