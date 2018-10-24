/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:30:00 by jochang           #+#    #+#             */
/*   Updated: 2018/10/04 20:29:58 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main()
{
	std::cout << "FragTrap" << std::endl;
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

	std::cout << "ScavTrap" << std::endl;
	ScavTrap st = ScavTrap("P1T-TP");

	st.rangedAttack("Minion A");
	st.meleeAttack("Minion B");

	st.takeDamage(42);
	st.takeDamage(100);
	st.beRepaired(5);
	st.beRepaired(200);

	st.challengeNewcomer("Brick");
	st.challengeNewcomer("Lilith");
	st.challengeNewcomer("Mordecai");
	st.challengeNewcomer("Roland");\

	st.takeDamage(24);
	ScavTrap ss = st;
	std::cout << ss.getname() << std::endl;
	std::cout << ss.gethp() << std::endl;
	std::cout << ss.getep() << std::endl;

	std::cout << "NinjaTrap" << std::endl;
	NinjaTrap nt = NinjaTrap("N0-TP");
	ClapTrap ct = ClapTrap("Cl4P-TP");
	nt.ninjaShoebox(ct);
	nt.ninjaShoebox(ft);
	nt.ninjaShoebox(st);
	nt.ninjaShoebox(nt);

	return (0);
}
