# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/27 15:09:51 by ralee             #+#    #+#              #
#    Updated: 2017/12/14 14:42:59 by ralee            ###   ########.fr        #
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
	@ranlib $(NAME)

all: $(NAME)

clean:
	@/bin/rm -rf $(O_FILES)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean