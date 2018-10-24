/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 09:14:16 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 09:40:19 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

#define INV 4

class	MateriaSource : public IMateriaSource
{
public:
	MateriaSource(void);
	MateriaSource(const MateriaSource&cpy);
	~MateriaSource(void);
	MateriaSource&	operator = (const MateriaSource &old);

	void		learnMateria(AMateria* m);
	AMateria*	createMateria(std::string const & type);

	AMateria*	_inv[INV];
};

#endif
