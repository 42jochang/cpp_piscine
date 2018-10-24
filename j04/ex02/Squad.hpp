/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 03:49:04 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 06:12:42 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

typedef struct		s_unit
{
	ISpaceMarine	*unit;
	s_unit			*next;
}					t_unit;

class	Squad : public ISquad
{
private:
	int		_count;
	t_unit	*_unit;

public:
	Squad(void);
	Squad(const Squad &cpy);
	~Squad(void);
	Squad&	operator = (const Squad &old);

	int				getCount(void)	const;
	ISpaceMarine*	getUnit(int)	const;
	int				push(ISpaceMarine*);
};
#endif
