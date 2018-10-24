/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 10:21:12 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 11:48:23 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	_fbits = 8;

Fixed::Fixed(void) : _fpv(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &old)
{
	std::cout << "Copy constructor called" << std::endl;
	_fpv = old.getRawBits();
}

Fixed&	Fixed::operator = (const Fixed &old)
{
	std::cout << "Assignation operator called" << std::endl;
	_fpv = old.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fpv);
}

void	Fixed::setRawBits(int const raw)
{
	_fpv = raw;
}
