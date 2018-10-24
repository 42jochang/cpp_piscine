/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 07:46:28 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 07:58:10 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
	Human human = Human();
	human.action("meleeAttack", "a piece of paper");
	human.action("rangedAttack", "an apple");
	human.action("intimidatingShout", "the cat");
	human.action("invalid", "hello");
	return (0);
}
