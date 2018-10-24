/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:30:00 by jochang           #+#    #+#             */
/*   Updated: 2018/10/04 15:43:52 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main()
{
	FragTrap ft = FragTrap("D3TH-TP");

	ft.rangedAttack("Jack");
	ft.meleeAttack("Wilhelm");
	
	ft.takeDamage(42);
	ft.takeDamage(42);
	ft.takeDamage(42);
	ft.beRepaired(1);
	ft.beRepaired(500);

	ft.vaulthunter_dot_exe("Axton");
	ft.vaulthunter_dot_exe("Gaige");
	ft.vaulthunter_dot_exe("Zer0");
	ft.vaulthunter_dot_exe("Maya");
	ft.vaulthunter_dot_exe("Tina");

	ft.takeDamage(24);
	FragTrap ff = ft;
	std::cout << ff.getname() << std::endl;
	std::cout << ff.gethp() << std::endl;
	std::cout << ff.getep() << std::endl;

	return (0);
}
