# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jochang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 09:14:30 by jochang           #+#    #+#              #
#    Updated: 2018/10/10 23:29:51 by jochang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

SRC = iter.cpp
	
CPP = clang++
CFLAGS = -Wall -Wextra -Werror

.PHONY: all
all: $(NAME)

$(NAME):
	@echo "\033[32mmaking iter...\033[0m"
	@$(CPP) $(CFLAGS) -o $(NAME) $(SRC)

.PHONY: clean
clean:
	@echo "\033[33mnothing to clean\033[0m"

.PHONY: fclean
fclean:
	@echo "\033[33mremoving executables...\033[0m"
	@rm -f $(NAME)

.PHONY: re
re: fclean all
