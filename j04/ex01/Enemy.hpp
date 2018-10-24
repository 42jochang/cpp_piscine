/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 01:38:59 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 03:05:01 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>

class	Enemy
{
protected:
	int			_hp;
	std::string	_type;

public:
	Enemy(void);
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy &cpy);
	virtual ~Enemy(void);

	Enemy&	operator = (const Enemy &old);

	std::string	const &	getType(void)	const;
	int					getHP(void)		const;

	virtual void		takeDamage(int);
};

#endif
