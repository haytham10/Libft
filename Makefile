# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmokhtar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 02:14:44 by hmokhtar          #+#    #+#              #
#    Updated: 2021/11/13 02:59:15 by hmokhtar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(wildcard *.c)
NAME = libft.a
OBJS = $(SRCS:.c=.o)
FLAGS = gcc -Wall -Wextra -Werror

$(NAME):$(OBJS)
	$(FLAGS) -c $(SRCS) -I.
	ar cr $@ $^

all:$(NAME)

clean:
	rm $(OBJS)

fclean: clean
		rm $(NAME)

re: fclean all
