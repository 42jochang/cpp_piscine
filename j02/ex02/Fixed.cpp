/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 10:21:12 by jochang           #+#    #+#             */
/*   Updated: 2018/10/04 08:02:24 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

/* Global Initialization */
int Fixed::_fbits = 8;

/* Canonical Member Functions */
Fixed::Fixed(void) : _fpv(0) { }
Fixed::~Fixed(void) { }
Fixed::Fixed(const Fixed &old) { *this = old; }
Fixed::Fixed(const int fpv) : _fpv(fpv << _fbits) { }
Fixed::Fixed(const float fpv) : _fpv(roundf(fpv * ( 1 << _fbits))) { }

/* Operator Overloads */
Fixed&	Fixed::operator = (const Fixed &old)
{
	_fpv = old.getRawBits();
	return (*this);
}

bool	Fixed::operator > (const Fixed &old) const { return (_fpv > old.getRawBits()); }
bool	Fixed::operator < (const Fixed &old) const { return (_fpv < old.getRawBits()); }
bool	Fixed::operator >=(const Fixed &old) const { return (_fpv >=old.getRawBits()); }
bool	Fixed::operator <=(const Fixed &old) const { return (_fpv <=old.getRawBits()); }
bool	Fixed::operator ==(const Fixed &old) const { return (_fpv ==old.getRawBits()); }
bool	Fixed::operator !=(const Fixed &old) const { return (_fpv !=old.getRawBits()); }
Fixed	Fixed::operator + (const Fixed &old) const { return (this->toFloat() + old.toFloat()); }
Fixed	Fixed::operator - (const Fixed &old) const { return (this->toFloat() - old.toFloat()); }
Fixed	Fixed::operator * (const Fixed &old) const { return (this->toFloat() * old.toFloat()); }
Fixed	Fixed::operator / (const Fixed &old) const { return (this->toFloat() / old.toFloat()); }

Fixed&	Fixed::operator ++ (void)
{
	_fpv++;
	return (*this);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed tmp = *this;
	this->_fpv++;
	return (tmp);
}

Fixed&	Fixed::operator -- (void)
{
	_fpv--;
	return (*this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed tmp = *this;
	this->_fpv--;
	return (tmp);
}

/* Member Functions */
int		Fixed::getRawBits(void) const		{ return (_fpv); }
void	Fixed::setRawBits(int const raw)	{ _fpv = raw; }
float	Fixed::toFloat(void) const			{ return ((float)_fpv / (1 << _fbits)); }
int		Fixed::toInt(void) const			{ return (_fpv >> _fbits); }

/* Non Member Functions */
std::ostream &operator << (std::ostream &output, Fixed const &old)
{
    output << old.toFloat();
    return output;
}

Fixed&			min(Fixed &a, Fixed &b)				{ return (a < b ? a : b); }
Fixed&			max(Fixed &a, Fixed &b)				{ return (a > b ? a : b); }
const Fixed&	min(const Fixed &a, const Fixed &b)	{ return (a < b ? a : b); }
const Fixed&	max(const Fixed &a, const Fixed &b)	{ return (a > b ? a : b); }
