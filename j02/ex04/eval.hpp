/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 09:39:38 by jochang           #+#    #+#             */
/*   Updated: 2018/10/04 10:30:50 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_HPP
#define EVAL_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Fixed.hpp"

#define PRINT(x) std::cout << x << std::endl

void	checkInput(char *s);
char	*cleanSpaces(char *str);
Fixed	parseFactor(char **x);
Fixed	parseProduct(char **x);
Fixed	parseSum(char **x);

#endif
