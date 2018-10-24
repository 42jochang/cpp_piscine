/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroBocal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 22:15:47 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 22:34:50 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROBOCAL_HPP
#define ASTEROBOCAL_HPP

#include "IAsteroid.hpp"

class	AsteroBocal : public IAsteroid
{
private:
	std::string	_name;

public:
	AsteroBocal(void);
	AsteroBocal(const AsteroBocal &cpy);
	~AsteroBocal(void);
	AsteroBocal&	operator = (const AsteroBocal &old);

	std::string	beMined(DeepCoreMiner*)	const;
	std::string	beMined(StripMiner*)	const;
	std::string	getName(void)			const;

};

#endif
