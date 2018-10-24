/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 10:21:05 by jochang           #+#    #+#             */
/*   Updated: 2018/10/04 06:13:33 by jochang          ###   ########.fr       */
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
	Fixed(void);
	Fixed(const Fixed &old);
	Fixed& operator = (const Fixed &old);
	~Fixed(void);

	Fixed(const int fpv);
	Fixed(const float fpv);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream &operator << (std::ostream &output, Fixed const &old);

#endif
