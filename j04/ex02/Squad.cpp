/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 03:49:09 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 07:13:47 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Squad.hpp"

Squad::Squad(void) : _count(0), _unit(NULL) { }
Squad::Squad(const Squad &cpy)
{
	for (int i = 0;i < cpy.getCount(); i++)
		this->push(cpy.getUnit(i));
}
Squad::~Squad(void)
{
	t_unit	*tmp;
	while (_unit)
	{
		tmp = _unit;
		_unit = _unit->next;
		delete tmp->unit;
		tmp->next = NULL;
		delete tmp;
	}
}

Squad&	Squad::operator = (const Squad &old)
{
	(void)old;
	return (*this);
}

int				Squad::getCount(void)	const { return (_count); }

ISpaceMarine*	Squad::getUnit(int u)	const
{
	t_unit	*tmp;

	tmp = _unit;
	for (int i = 0;i < u;i++)
	{
		if (tmp)
			tmp = tmp->next;
		else
			return (NULL);
	}
	return (tmp->unit);
}

int		Squad::push(ISpaceMarine *m)
{
	t_unit	*tmp;

	if (!m)
		return (_count);
	tmp = _unit;
	while (tmp)
	{
		if (tmp->unit == m)
			return (_count);
		tmp = tmp->next;
	}
	tmp = _unit;
	if (tmp)
	{
		while (tmp->next)
		{
			if (tmp->unit == m)
				return (_count);
			tmp = tmp->next;
		}
		tmp->next = new t_unit;
		tmp->next->unit = m;
		tmp->next->next = NULL;
	}
	else
	{
		_unit = new t_unit;
		_unit->unit = m;
		_unit->next = NULL;
	}
	_count++;
	return (_count);
}
