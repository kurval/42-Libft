# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkurkela <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 09:34:51 by vkurkela          #+#    #+#              #
#    Updated: 2019/10/17 11:20:51 by vkurkela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(filter-out main.c, $(wildcard *.c))

HEADERS = libft.h

OBJECTS = ./*.o

FLAGS = -Wall -Wextra -Werror -I$(HEADERS)

CC = gcc

MAIN = main.c

RUN = ./a.out

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJECTS)
	$(CC) $(FLAGS) $(MAIN) $(NAME)
	$(RUN)

clean:
	/bin/rm -f $(OBJECTS)

fclean:
	/bin/rm -f $(NAME)

re: fclean clean $(NAME)

.PHONY: all clean fclean re
