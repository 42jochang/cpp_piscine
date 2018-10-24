/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 01:16:22 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 02:02:29 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{

private:
	std::string	_name;
	std::string	_type;

public:
	Zombie(std::string name, std::string type);
	~Zombie(void);

	void	announce(void);
};

#endif
