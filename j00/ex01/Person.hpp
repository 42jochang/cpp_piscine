/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 10:26:08 by jochang           #+#    #+#             */
/*   Updated: 2018/10/01 21:09:29 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <string>

class Person
{
	private:
		std::string	first;
		std::string	last;
		std::string	nick;
		std::string	login;
		std::string	address;
		std::string	email;
		std::string	phone;
		int			bmonth;
		int			bday;
		int			byear;
		std::string	meal;
		std::string	color;
		std::string	secret;

	public:
		Person();
		bool	exists(void);
		void	addPerson(void);
		void	showIndex(int);
		void	showPerson(void);
};

#endif
