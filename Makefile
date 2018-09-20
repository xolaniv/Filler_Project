# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/26 17:12:34 by xvilakaz          #+#    #+#              #
#    Updated: 2018/08/27 10:49:21 by xvilakaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = xvilakaz.filler

SRCS := ./srcs/filler.c
SRCS += ./srcs/work_with_figure.c
SRCS += ./srcs/check_input.c

CC = gcc

FLAGS = -Wall -Wextra -Werror -I ./srcs

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft
	@echo "\033[32m creating $(NAME) .....\033[0m"
	@$(CC) -o $(NAME) $(FLAG) $(OBJ) libft/libft.a
	echo "\033[32m$(Name) created succesfully\033[0m"

clean:
	@echo "\033[32m Removing $(Name) ....\033[0m"
	@make clean -C libft
	@rm -f $(NAME)
	@"\033[31m$(Name) created succesfully\033[0m"

re: fclean all
