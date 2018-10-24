/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 08:12:12 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 09:38:03 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class	Cure : public AMateria
{
public:
	Cure(void);
	Cure(const Cure &cpy);
	~Cure(void);
	Cure&	operator = (const Cure &old);

	AMateria	*clone(void)	const;
	void		use(ICharacter & target);
};

#endif
