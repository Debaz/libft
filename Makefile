#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/04 21:24:16 by klescaud          #+#    #+#              #
#    Updated: 2015/06/01 16:24:20 by klescaud         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = 		libft.a

SRCS =		./sources/ft_putchar.c \
			./sources/ft_putchar_fd.c \
			./sources/ft_putstr.c \
			./sources/ft_putstr_fd.c \
			./sources/ft_putendl.c \
			./sources/ft_putendl_fd.c \
			./sources/ft_isalpha.c \
			./sources/ft_isdigit.c \
			./sources/ft_isalnum.c \
			./sources/ft_isascii.c \
			./sources/ft_isprint.c \
			./sources/ft_toupper.c \
			./sources/ft_tolower.c \
			./sources/ft_strrev.c \
			./sources/ft_strjoin.c \
			./sources/ft_itoa.c \
			./sources/ft_stradd.c \
			./sources/ft_strlen.c \
			./sources/ft_strcmp.c \
			./sources/ft_strncmp.c \
			./sources/ft_strcpy.c \
			./sources/ft_strdup.c \
			./sources/ft_ten_pow.c \
			./sources/ft_putnbr.c \
			./sources/ft_putnbr_fd.c \
			./sources/ft_memset.c \
			./sources/ft_bzero.c \
			./sources/ft_atoi.c

CFLAGS = 	-Wall -Wextra -Werror

OBJ =		ft_putchar.o \
			ft_putchar_fd.o \
			ft_putstr.o \
			ft_putstr_fd.o \
			ft_putendl.o \
			ft_putendl_fd.o \
			ft_isalpha.o \
			ft_isdigit.o \
			ft_isalnum.o \
			ft_isascii.o \
			ft_isprint.o \
			ft_toupper.o \
			ft_tolower.o \
			ft_strrev.o \
			ft_strjoin.o \
			ft_itoa.o \
			ft_stradd.o \
			ft_strlen.o \
			ft_strcmp.o \
			ft_strncmp.o \
			ft_strcpy.o \
			ft_strdup.o \
			ft_ten_pow.o \
			ft_putnbr_fd.o \
			ft_putnbr.o \
			ft_memset.o \
			ft_bzero.o \
			ft_atoi.o

INCLUDES =	-I./includes

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) $(CFLAGS) $(INCLUDES)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

test:
	gcc -o Testfile test.c -L. -lft $(INCLUDES)

cleantest:
	rm Testfile

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all