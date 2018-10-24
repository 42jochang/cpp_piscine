/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 18:50:52 by jochang           #+#    #+#             */
/*   Updated: 2018/10/12 18:50:56 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class	Span
{
private:
	unsigned int 		_n;
	std::vector<int>	_arr;

public:
	Span(void);
	Span(unsigned int n);
	Span(const Span &cpy);
	~Span(void);
	Span& operator = (const Span &old);

	void			addNumber(int n);
	void			addRange(int a, int b);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);
};

#endif
