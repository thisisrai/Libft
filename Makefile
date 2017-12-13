# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/27 15:09:51 by ralee             #+#    #+#              #
#    Updated: 2017/12/12 15:32:12 by ralee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CHECKER = -Wall -Wextra -Werror
INCLUDE_PATH = ./libft.h
OPTION = -c -I $(INCLUDE_PATH)
SOURCE = *.c
O_FILES = *.o

$(NAME):
	@gcc $(CHECKER) $(OPTION) $(SOURCE)
	@ar rc $(NAME) $(O_FILES)

all: $(NAME)

clean:
	@/bin/rm -r $(O_FILES)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean $(NAME)