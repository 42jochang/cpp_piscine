/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 16:05:40 by jochang           #+#    #+#             */
/*   Updated: 2018/10/11 19:06:07 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template<typename T>
class	Array
{
private:
	T				**_arr;
	unsigned int	_size;
public:
	Array<T>(void) : _arr(nullptr), _size(0) { }
	Array<T>(unsigned int n) : _arr(nullptr), _size(n)
	{
		_arr = new T*[n];
		for (unsigned int i = 0;i < _size;i++)
			_arr[i] = new T();
	}
	Array<T>(Array<T> const &cpy)	{ *this = cpy; }
	~Array<T>(void)
	{
		for (unsigned int i = 0;i < _size;i++)
			delete _arr[i];
		delete [] _arr;
	}

	Array<T>& operator = (Array<T> const &old)
	{
		_size = old.size();
		T *a = new T*[_size];
		for (int i = 0;i < _size;i++)
			a[i] = new T(old[i]);
		return (*this);
	}
	T& operator [] (unsigned int i)
	{
		if (i >= _size)
			throw OutOfBoundsException();
		return (*_arr[i]);
	}
	unsigned int	size(void)	const	{ return (_size); }

	class   OutOfBoundsException : public std::exception
	{
	public:
		OutOfBoundsException(void) { }
		OutOfBoundsException(const OutOfBoundsException &) { }
		~OutOfBoundsException(void) throw() { }
		OutOfBoundsException& operator = (const OutOfBoundsException &) { }
		virtual const char* what() const throw()
		{ return ("index out of bounds"); };
	};
};

#endif
