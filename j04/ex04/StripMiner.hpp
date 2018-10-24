/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 22:01:23 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 22:14:04 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIPMINER_HPP
#define STRIPMINER_HPP

#include "IMiningLaser.hpp"

class	StripMiner : public IMiningLaser
{
public:
	StripMiner(void);
	StripMiner(const StripMiner &cpy);
	~StripMiner(void);
	StripMiner&	operator = (const StripMiner &old);

	void	mine(IAsteroid*);
};

#endif
