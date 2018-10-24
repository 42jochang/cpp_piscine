/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BocalSteroid.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 22:15:47 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 22:35:38 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOCALSTEROID_HPP
#define BOCALSTEROID_HPP

#include "IAsteroid.hpp"

class	BocalSteroid : public IAsteroid
{
private:
	std::string	_name;

public:
	BocalSteroid(void);
	BocalSteroid(const BocalSteroid &cpy);
	~BocalSteroid(void);
	BocalSteroid&	operator = (const BocalSteroid &old);

	std::string	beMined(DeepCoreMiner*)	const;
	std::string	beMined(StripMiner*)	const;
	std::string	getName(void)			const;

};

#endif
