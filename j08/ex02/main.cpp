/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 19:05:36 by jochang           #+#    #+#             */
/*   Updated: 2018/10/12 19:05:41 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "mutantstack.hpp"

#define PRINT(x) std::cout << x << std::endl

int main()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	PRINT(mstack.top());

	mstack.pop();
	PRINT(mstack.size());

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		PRINT(*it);
		++it;
	}

	for (int i = 0;i < 100;i++)
		mstack.push(i);

	MutantStack<int>::iterator iter = mstack.begin();
	MutantStack<int>::iterator itere = mstack.end();

	while (iter != itere)
	{
		PRINT(*iter);
		++iter;
	}

	std::stack<int> a(mstack);
	return (0);
}
