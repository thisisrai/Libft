# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ralee <ralee@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/27 15:09:51 by ralee             #+#    #+#              #
#    Updated: 2017/11/29 17:16:29 by ralee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./src/
CHECKER = -Wall -Wextra -Werror
INCLUDE_PATH = ./include/
OPTION = -c -I $(INCLUDE_PATH)
SOURCE = $(SRC)ft_strlen.c $(SRC)ft_strdup.c $(SRC)ft_strcpy.c $(SRC)ft_strncpy.c \
$(SRC)ft_strcmp.c $(SRC)ft_atoi.c $(SRC)ft_isalpha.c $(SRC)ft_isdigit.c $(SRC)ft_isalnum.c \
$(SRC)ft_strstr.c $(SRC)ft_isascii.c $(SRC)ft_toupper.c $(SRC)ft_tolower.c $(SRC)ft_isprint.c
O_FILES = ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcmp.o ft_atoi.o \
ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_strstr.o ft_isascii.o ft_toupper.o \
ft_tolower.o ft_isprint.o

all: $(NAME)

$(NAME):
	@gcc $(CHECKER) $(OPTION) $(SOURCE)
	@ar rc $(NAME) $(O_FILES)


clean:
	@/bin/rm -r $(O_FILES)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean $(NAME)