/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 03:58:15 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 04:13:23 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "Brain.hpp"

Brain::Brain(void) { };
Brain::~Brain(void) { };

std::string	Brain::identify(void)
{
	std::ostringstream buf;
	buf << this;
	return (buf.str());
}
