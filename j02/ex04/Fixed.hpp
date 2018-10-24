/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 10:21:05 by jochang           #+#    #+#             */
/*   Updated: 2018/10/04 10:14:11 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class	Fixed
{
private:
	int			_fpv;
	static int	_fbits;

public:
	/* Canonical Member Functions */
	Fixed(void);
	Fixed(const Fixed &old);
	~Fixed(void);
	Fixed(const int fpv);
	Fixed(const float fpv);
	Fixed(const double fpv);

	/* Operator Overloads */
	Fixed&	operator = (const Fixed &old);

	bool	operator > (const Fixed &old) const;
	bool	operator < (const Fixed &old) const;
	bool	operator >=(const Fixed &old) const;
	bool	operator <=(const Fixed &old) const;
	bool	operator ==(const Fixed &old) const;
	bool	operator !=(const Fixed &old) const;

	Fixed	operator + (const Fixed &old) const;
	Fixed	operator - (const Fixed &old) const;
	Fixed	operator * (const Fixed &old) const;
	Fixed	operator / (const Fixed &old) const;

	Fixed&	operator ++(void);
	Fixed	operator ++(int);
	Fixed&	operator --(void);
	Fixed	operator --(int);

	/* Member functions */
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

/* Non Member Functions */
std::ostream	&operator << (std::ostream &output, Fixed const &old);
Fixed&			min(Fixed &a, Fixed &b);
Fixed&			max(Fixed &a, Fixed &b);
const Fixed&	min(const Fixed &a, const Fixed &b);
const Fixed&	max(const Fixed &a, const Fixed &b);
#endif
