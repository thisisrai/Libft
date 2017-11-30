# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/27 15:09:51 by ralee             #+#    #+#              #
#    Updated: 2017/11/30 15:46:56 by ralee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./src/
CHECKER = -Wall -Wextra -Werror
INCLUDE_PATH = ./include/
OPTION = -c -I $(INCLUDE_PATH)
SOURCE = $(SRC)*.c
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