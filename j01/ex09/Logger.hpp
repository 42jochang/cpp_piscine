/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 07:59:25 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 08:22:35 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>

class	Logger
{
private:
	std::string	_fileName;

	void		logToConsole(std::string str);
	void		logToFile(std::string str);
	std::string	makeLogEntry(std::string str);

public:
	Logger(std::string fileName);
	~Logger(void);

	void	log(std::string const & dest, std::string const & message);
};

#endif
