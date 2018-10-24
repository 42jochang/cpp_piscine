/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 02:50:54 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 03:20:54 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"

int main()
{
	Character* zaz = new Character("zaz");
	
	std::cout << *zaz;

	Enemy* b = new RadScorpion();
	
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << "Rad Scorpion's HP: " << b->getHP() << std::endl;
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << "Rad Scorpion's HP: " << b->getHP() << std::endl;
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << "Rad Scorpion's HP: " << b->getHP() << std::endl;
	std::cout << *zaz;

	Enemy *c = new SuperMutant();
	std::cout << "Current AP: " << zaz->getAp() << std::endl;
	zaz->recoverAP();
	zaz->recoverAP();
	std::cout << "Current AP: " << zaz->getAp() << std::endl;

	delete c;
	return 0;
}
