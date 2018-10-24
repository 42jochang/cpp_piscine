/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 07:59:30 by jochang           #+#    #+#             */
/*   Updated: 2018/10/03 08:32:42 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <iomanip>
#include "Logger.hpp"

Logger::Logger(std::string fileName) : _fileName(fileName) { };
Logger::~Logger(void) { };

void	Logger::logToConsole(std::string str)
{
	std::cout << str << std::endl;
}

void	Logger::logToFile(std::string str)
{
	std::ofstream os(_fileName, std::ios::app);
	if (!os)
	{
		std::cout << "Error: unable to open or create file" << std::endl;
		return;
	}
	os << str << std::endl;
}

std::string	Logger::makeLogEntry(std::string str)
{
	std::time_t t = std::time(nullptr);
	std::stringstream temp;
   	temp << std::put_time(std::localtime(&t), "[%m/%d/%y_%OH:%OM] ");
	return (temp.str() + str);
}

void	Logger::log(std::string const & dest, std::string const & message)
{
	std::string str = makeLogEntry(message);
	std::string list[2] = {
		"console",
		"file"
	};
	void (Logger::*actions[2])(std::string s) = {
		&Logger::logToConsole,
		&Logger::logToFile
	};
	for (int i = 0;i < 2;i++)
		if (list[i] == dest)
		{
			(this->*(actions[i]))(str);
			return;
		}
}
