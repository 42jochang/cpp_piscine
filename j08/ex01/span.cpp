/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 18:50:04 by jochang           #+#    #+#             */
/*   Updated: 2018/10/12 18:50:43 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <stdexcept>
#include <algorithm>
#include <climits>
#include "span.hpp"

Span::Span(unsigned int n) : _n(n) { _arr.reserve(n); }
Span::Span(const Span &cpy) { *this = cpy; }
Span::~Span(void) { }
Span&	Span::operator = (const Span &old)
{
	_arr = old._arr;
	return *this;
}

void	Span::addNumber(int x)
{
	if (_arr.size() < _n)
		_arr.push_back(x);
	else
		throw std::length_error("object is full");
}

void	Span::addRange(int a, int b)
{
	if (a > b)
	{
		b = a + b;
		a = b - a;
		b = b - a;
	}
	while (a <= b)
	{
		if (_arr.size() > _n)
			throw std::length_error("object is full");
		_arr.push_back(a);
		a++;
	}
}

unsigned int	Span::shortestSpan(void)
{
	if (_arr.size() <= 1)
		throw std::logic_error("no span to calculate");
	std::vector<int>	tmp = _arr;
	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator	a = tmp.begin();
	int s = INT_MAX;
	for (unsigned int i = 0;i < tmp.size() - 1;i++)
		s = (a[i + 1] - a[i] < s ? a[i + 1] - a[i] : s);
	return (s);
}

unsigned int	Span::longestSpan(void)
{
	if (_arr.size() <= 1)
		throw std::logic_error("no span to calculate");
	return (*std::max_element(_arr.begin(), _arr.end()) -
			*std::min_element(_arr.begin(), _arr.end()));
}
