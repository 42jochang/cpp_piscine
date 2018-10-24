/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 17:55:24 by jochang           #+#    #+#             */
/*   Updated: 2018/10/09 17:55:24 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"
#include <ctime>

#define CATCH catch (std::exception& e) { PRINT(e.what()); }

CentralBureaucracy::CentralBureaucracy(void)
{
	t_central	*ptr;

	_block = new t_central();
	OfficeBlock tmp;
	_block->ob = tmp;
	Intern intern;
	_block->ob.setIntern(intern);
	_block->next = nullptr;
	ptr = _block;
	for (int i = 0;i < 19;i++)
	{
		_block->next = new t_central();
		OfficeBlock tmp;
		_block->next->ob = tmp;
		Intern intern;
		_block->next->ob.setIntern(intern);
		_block->next->next = nullptr;
		_block = _block->next;
	}
	_block = ptr;
	_queue = nullptr;
	srand(time(nullptr));
}
CentralBureaucracy::~CentralBureaucracy(void) { }

void	CentralBureaucracy::feedBureaucrat(Bureaucrat &b)
{
	t_central	*ptr;

	ptr = _block;
	while (!(ptr->ob.emptySigner() && !(ptr->ob.emptyExec())))
	{
		std::cout << "hello!" << std::endl;
		ptr = ptr->next;
	}
	if (ptr->ob.emptySigner())
	{
		ptr->ob.setSigner(b);
		return;
	}
	else if (ptr->ob.emptyExec())
	{
		ptr->ob.setExecutor(b);
		return;
	}
	throw RejectionException();
}

void	CentralBureaucracy::queueUp(std::string name)
{
	t_queue	*ptr;

	ptr = new t_queue();
	ptr->name = name;
	ptr->next = nullptr;
	if (!_queue)
		_queue = ptr;
	else
	{
		t_queue *end;
		end = _queue;
		while (end)
			end = end->next;
		end->next = ptr;
	}
}

void	CentralBureaucracy::doBureaucracy(void)
{
	std::string arr[3] = {"shrubbery", "robotomy", "pardon"};

	t_central *head;
	t_queue *ptr;
	head = _block;
	while (_queue)
	{
		try { _block->ob.doBureaucracy(arr[rand() % 3], _queue->name); }
		CATCH;
		ptr = _queue;
		_queue = _queue->next;
		delete ptr;
		_block = _block->next;
		if (!_block)
			_block = head;
	}
}

CentralBureaucracy::RejectionException::RejectionException(void) { }
CentralBureaucracy::RejectionException::RejectionException(const RejectionException &cpy) { *this = cpy; }
CentralBureaucracy::RejectionException::~RejectionException(void) throw() { }
CentralBureaucracy::RejectionException& CentralBureaucracy::RejectionException::operator = (const RejectionException&) { return (*this); }
const char* CentralBureaucracy::RejectionException::what() const throw() { return ("Error: No space in Central"); }
