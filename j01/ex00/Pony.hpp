/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 14:34:29 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 00:48:43 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <string>

class Pony
{
private:
	std::string	_name;
	std::string	_breed;
	std::string	_color;
	
public:
	Pony(std::string name, std::string breed, std::string color);
	~Pony(void);

	void	neigh(void);
	void	run(void);
};

#endif
