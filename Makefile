# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/27 15:09:51 by ralee             #+#    #+#              #
#    Updated: 2017/11/27 18:49:35 by ralee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./src/
CHECKER = -Wall -Wextra -Werror
INCLUDE_PATH = ./include/
OPTION = -c -I $(INCLUDE_PATH)
SOURCE = $(SRC)ft_strlen.c $(SRC)ft_strdup.c
O_FILES = ft_strlen.o ft_strdup.o

all: $(NAME)

$(NAME):
	gcc $(CHECKER) $(OPTION) $(SOURCE)
	ar rc $(NAME) $(O_FILES)


clean:
	/bin/rm -f $(O-FILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean $(NAME)