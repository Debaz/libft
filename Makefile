#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klescaud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/21 12:49:10 by klescaud          #+#    #+#              #
#    Updated: 2015/12/21 16:27:57 by klescaud         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRC_PATH =		src

SRC_NAME =		ft_putchar.c		ft_putchar_fd.c		ft_putstr.c		\
				ft_putstr_fd.c		ft_putendl.c		ft_putendl_fd.c	\
				ft_isalpha.c		ft_isdigit.c		ft_isalnum.c	\
				ft_isascii.c		ft_isprint.c		ft_toupper.c	\
				ft_tolower.c		ft_strrev.c			ft_strjoin.c	\
				ft_itoa.c			ft_stradd.c			ft_strlen.c		\
				ft_strcmp.c			ft_strncmp.c		ft_strcpy.c		\
				ft_strdup.c			ft_ten_pow.c		ft_putnbr.c		\
				ft_putnbr_fd.c		ft_memset.c			ft_bzero.c		\
				ft_atoi.c			ft_strnew.c			ft_strsplit.c	\
				ft_memalloc.c		ft_memdel.c			ft_strdel.c		\
				ft_strchr.c			ft_striter.c		ft_striteri.c	\
				ft_strmap.c			ft_strmapi.c		strequ.c WIPWIPWIPWIPWIP

OBJ_PATH =		obj

INC_PATH =		include

CPPFLAGS =		-I$(INC_PATH)

LDFLAGS =		-Llibft

LDLIBS =		-lft

NAME =			a.out

CC =			clang

CFLAGS =		-Werror -Wall -Wextra

OBJ_NAME =		$(SRC_NAME:.c=.o)

SRC =			$(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJ =			$(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all:		$(NAME)

$(NAME):			$(OBJ)
		$(CC) $(LDFLAGS) $(LDLIBS) $^ -o $@

$(OBJ_PATH)%.o:		$(SRC_PATH)%.c
		@mkdir $(OBJ_PATH) 2> /dev/null || true
		$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
		rm -fv $(OBJ)
		@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean:				clean
		rm -fv $(NAME)
re:					fclean all

.PHONY:				all, clean, fclean, re

norme:
		norminette $(SRC)
		norminette $(INC_PATH)*.h
