/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 23:29:57 by jochang           #+#    #+#             */
/*   Updated: 2018/10/11 14:38:19 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void	iter(T *adr, int len, void (*f)(T const &))
{
	for (int i = 0;i < len;i++)
		f(adr[i]);
}

template<typename U>
void	print(U const & x)
{
	std::cout << x << std::endl;
}

int	main()
{
	int lst[] = {1, 2, 3, 4, 5};
	iter<int>(lst, 5, print);
	std::string arr[] = {"hello", "world", "this", "message"};
	iter<std::string>(arr, 4, print);
	return (0);
}
