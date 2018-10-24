/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 08:22:42 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 08:24:44 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main()
{
	Logger log = Logger("info.log");
	log.log("console", "first message");
	log.log("file", "second message");
	log.log("file", "third message");
	return (0);
}
