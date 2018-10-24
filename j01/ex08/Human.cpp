/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 06:44:02 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 07:55:23 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{
	std::cout << target << " has been punched" << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << target << " has been sniped" << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << target << " hears a faint noise" << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	std::string	list[3] = {
		"meleeAttack",
		"rangedAttack",
		"intimidatingShout"
	};
	void (Human::*actions[3])(std::string const & target) = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	for (int i = 0; i < 3; i++)
		if (list[i] == action_name)
		{
			(this->*(actions[i]))(target);
			return;
		}
}
