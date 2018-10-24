/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 19:48:26 by jochang           #+#    #+#             */
/*   Updated: 2018/10/12 21:05:49 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>

template<typename T>
int	easyfind(T &obj, int num)
{
	typename T::iterator iterator;
	iterator = std::find(obj.begin(), obj.end(), num);
	if (iterator == obj.end())
		throw std::logic_error("number not in list");
	return (*iterator);
}

#endif
