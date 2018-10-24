/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 01:15:48 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 02:31:02 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <time.h>

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	randomChump(void)
{
	std::string name[6] = {"Andy", "Bill", "Carol", "David", "Ed", "Fia"};
	Zombie zombie = Zombie(name[rand() % 6], "random");
	zombie.announce();
	return;
}

int	main()
{

	ZombieEvent event = ZombieEvent();
	Zombie* bill = event.newZombie("Bill");
	event.setZombieType("raging");
	Zombie* dave = event.newZombie("Dave");
	delete bill;
	delete dave;
	
	srand(time(NULL));
	randomChump();
	randomChump();
	randomChump();
	return (0);
}
