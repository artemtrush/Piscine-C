# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atrush <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/13 19:06:58 by atrush            #+#    #+#              #
#    Updated: 2016/10/13 21:58:58 by atrush           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
OPTIONS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(OPTIONS) main.c
	gcc -o $(NAME) $(OPTIONS) main.o

clean:
	/bin/rm -f main.o

fclean: clean
	/bin/rm -f $(NAME)

