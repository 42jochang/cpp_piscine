/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 08:12:12 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 09:57:53 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Ice : public AMateria
{
public:
	Ice(void);
	Ice(const Ice &cpy);
	~Ice(void);
	Ice&	operator = (const Ice &old);

	AMateria		*clone(void)	const;
	void	use(ICharacter & target);
};

#endif
