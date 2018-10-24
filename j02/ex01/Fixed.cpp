/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 10:21:12 by jochang           #+#    #+#             */
/*   Updated: 2018/10/04 06:30:15 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

int Fixed::_fbits = 8;

Fixed::Fixed(void) : _fpv(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &old)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = old;
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

Fixed::Fixed(const int fpv) : _fpv(fpv << _fbits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fpv) : _fpv(roundf(fpv * ( 1 << _fbits)))
{
	std::cout << "Float constructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return (_fpv);
}

void	Fixed::setRawBits(int const raw)
{
	_fpv = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_fpv / (1 << _fbits));
}

int		Fixed::toInt(void) const
{
	return (_fpv >> _fbits);
}

std::ostream &operator << (std::ostream &output, Fixed const &old)
{
    output << old.toFloat();
    return output;
};
