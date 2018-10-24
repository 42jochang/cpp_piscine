/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 22:52:13 by jochang           #+#    #+#             */
/*   Updated: 2018/10/06 22:59:21 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroBocal.hpp"
#include "BocalSteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "MiningBarge.hpp"

int main()
{
	MiningBarge barge;

	DeepCoreMiner a;
	StripMiner b;

	barge.equip(&a);
	barge.equip(&b);

	AsteroBocal c;
	BocalSteroid d;

	barge.mine(&c);
	barge.mine(&d);

	return (0);
}
