/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 14:34:36 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 00:51:24 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony *pony = new Pony("Heap", "Big", "Blue");
	pony->neigh();
	delete pony;
	return;
}

void	ponyOnTheStack(void)
{
	Pony pony = Pony("Stack", "Small", "Red");
	pony.run();
	return;	
}

int 	main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
