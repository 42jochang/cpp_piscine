/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mob.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:56:49 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 00:28:11 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOB_HPP
#define MOB_HPP

#include "Victim.hpp"

class	Mob : public Victim
{
public:
	Mob(void);
	Mob(std::string name);
	Mob(const Mob &cpy);
	virtual ~Mob(void);

	void	getPolymorphed(void) const;
};

#endif
