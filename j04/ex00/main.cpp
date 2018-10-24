/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:27:33 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 00:30:10 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Mob.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Mob bill("Bill");

	std::cout << robert << jim << joe;
	std::cout << bill;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(bill);

	return (0);
}

