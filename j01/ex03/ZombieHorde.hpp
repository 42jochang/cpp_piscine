/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 02:38:38 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 03:42:05 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class	ZombieHorde
{

private:
	int		_num;
	Zombie	*_zombies;
public:
	ZombieHorde(int n);
	~ZombieHorde(void);

	Zombie	&createRand(void);
	void	announce(void);
};

#endif
