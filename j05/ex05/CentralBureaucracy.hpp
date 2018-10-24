/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 17:55:30 by jochang           #+#    #+#             */
/*   Updated: 2018/10/09 17:55:31 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRALBUREAUCRACY_HPP
#define CENTRALBUREAUCRACY_HPP

#include "OfficeBlock.hpp"

typedef struct	s_central 
{
	OfficeBlock	ob;
	s_central	*next;
}				t_central;

typedef struct	s_queue
{
	std::string	name;
	s_queue		*next;
}				t_queue;

class CentralBureaucracy
{
private:
	t_central	*_block;
	t_queue		*_queue;
public:
	CentralBureaucracy(void);
	CentralBureaucracy(const CentralBureaucracy &cpy);
	~CentralBureaucracy(void);
	CentralBureaucracy& operator = (const CentralBureaucracy &old);

	void	feedBureaucrat(Bureaucrat &b);
	void	queueUp(std::string name);
	void	doBureaucracy(void);

	class	RejectionException : public std::exception
	{
	public:
		RejectionException(void);
		RejectionException(const RejectionException &cpy);
		~RejectionException(void) throw();
		RejectionException& operator = (const RejectionException &old);
		virtual const char* what() const throw();
	};
};

#endif