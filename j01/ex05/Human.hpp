/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 04:15:17 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 04:24:49 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class	Human
{
private:
	Brain*	_brain;

public:
	Human(void);
	~Human(void);

	std::string	identify(void);
	Brain&		getBrain(void);
};

#endif
