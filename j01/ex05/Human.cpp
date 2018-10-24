/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 04:15:21 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 04:25:13 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	_brain = new Brain();
};

Human::~Human(void)
{
	delete _brain;
};

std::string	Human::identify(void)
{
	return (_brain->identify());
}

Brain&		Human::getBrain(void)
{
	return (*_brain);
}
