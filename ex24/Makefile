# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsotty <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 15:44:40 by gsotty            #+#    #+#              #
#    Updated: 2016/11/03 16:32:57 by gsotty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = exec

NAME = libft.a

CC = gcc

FLAG = -Wall -Wextra -Werror

DOSSRC = srcs/

DOSHEAD = includes/

HEAD = *.h

SRC = $(DOSSRC)ft_putchar.c \
	$(DOSSRC)ft_putstr.c \
	$(DOSSRC)ft_strcmp.c \
	$(DOSSRC)ft_strlen.c \
	$(DOSSRC)ft_swap.c

DEST = ft_putchar.o \
	ft_putstr.o \
	ft_strcmp.o \
	ft_strlen.o \
	ft_swap.o

all: $(EXEC)

exec: 
	$(CC) -c $(FLAG) $(SRC) -I $(DOSHEAD)
	ar rc $(NAME) $(DEST)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

