# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/27 15:09:51 by ralee             #+#    #+#              #
#    Updated: 2017/11/28 17:53:33 by ralee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./src/
CHECKER = -Wall -Wextra -Werror
INCLUDE_PATH = ./include/
OPTION = -c -I $(INCLUDE_PATH)
SOURCE = $(SRC)ft_strlen.c $(SRC)ft_strdup.c $(SRC)ft_strcpy.c $(SRC)ft_strncpy.c \
$(SRC)ft_strcmp.c $(SRC)ft_atoi.c $(SRC)ft_isalpha.c $(SRC)ft_isdigit.c
O_FILES = ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcmp.o ft_atoi.o ft_isalpha.o ft_isdigit.o

all: $(NAME)

$(NAME):
	gcc $(CHECKER) $(OPTION) $(SOURCE)
	ar rc $(NAME) $(O_FILES)


clean:
	/bin/rm -r $(O_FILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean $(NAME)