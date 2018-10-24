/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 22:01:23 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 22:58:34 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_HPP
#define DEEPCOREMINER_HPP

#include "IMiningLaser.hpp"

class	DeepCoreMiner : public IMiningLaser
{
public:
	DeepCoreMiner(void);
	DeepCoreMiner(const DeepCoreMiner &cpy);
	~DeepCoreMiner(void);
	DeepCoreMiner&	operator = (const DeepCoreMiner &old);

	void	mine(IAsteroid*);
};

#endif
