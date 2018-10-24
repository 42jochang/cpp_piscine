# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jochang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 09:14:30 by jochang           #+#    #+#              #
#    Updated: 2018/10/02 13:00:00 by jochang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MEGA = megaphone

SRC = megaphone.cpp

CPP = clang++
CFLAGS = -Wall -Wextra -Werror

.PHONY: all
all: $(MEGA)

$(MEGA):
	@echo "\033[32mmaking megaphone...\033[0m"
	@$(CPP) $(CFLAGS) -o $(MEGA) $(SRC)

.PHONY: clean
clean:
	@echo "\033[33mnothing to clean\033[0m"

.PHONY: fclean
fclean:
	@echo "\033[33mremoving executables...\033[0m"
	@rm -f $(MEGA)

.PHONY: re
re: fclean all
