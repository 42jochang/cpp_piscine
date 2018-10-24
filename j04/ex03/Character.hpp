/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 08:29:44 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 10:03:26 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define INV 4

class	Character : public ICharacter
{
private:
	std::string	_name;

public:
	Character(void);
	Character(std::string const &name);
	Character(const Character &cpy);
	~Character(void);
	Character&	operator = (const Character &old);

	std::string const &	getName(void)	const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);

	AMateria*	_inv[INV];
};

#endif
