/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 14:34:19 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 00:52:24 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name, std::string breed, std::string color) :
			_name(name), _breed(breed), _color(color)
{
	std::cout << _name << " is born" << std::endl;
	return;
}

Pony::~Pony(void)
{
	std::cout << _name << " has died" << std::endl;
	return;
}

void	Pony::neigh(void) { std::cout << _name << " says moo" << std::endl; }
void	Pony::run(void) { std::cout << _name << " runs" << std::endl; }
