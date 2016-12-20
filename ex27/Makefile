# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsotty <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 15:44:40 by gsotty            #+#    #+#              #
#    Updated: 2016/11/03 19:20:57 by gsotty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = exec

NAME = ft_display_file

CC = gcc

FLAG = -Wall -Wextra -Werror

DOSSRC = srcs/

DOSHEAD = includes/

HEAD = *.h

SRC = ft_display_file.c

DEST =

all: $(EXEC)

exec: 
	$(CC) $(FLAG) $(SRC) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

