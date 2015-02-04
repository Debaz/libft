#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/04 21:24:16 by klescaud          #+#    #+#              #
#    Updated: 2015/02/04 22:14:27 by klescaud         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = 		libft.a

SRCS = 		./source/ft_atoi.c \
			./source/ft_isalnum.c \
			./source/ft_isalpha.c \
			./source/ft_isascii.c \
			./source/ft_isdigit.c \
			./source/ft_isprint.c \
			./source/ft_putchar.c \
			./source/ft_putstr.c \
			./source/ft_strcmp.c \
			./source/ft_strcpy.c \
			./source/ft_strdup.c \
			./source/ft_strlen.c \
			./source/ft_strrev.c \
			./source/ft_tolower.c \
			./source/ft_toupper.c

CFLAGS = 	-Wall -Wextra -Werror $(INCLUDES)

OBJ =		ft_atoi.o \
			ft_isalnum.o \
			ft_isalpha.o \
			ft_isascii.o \
			ft_isdigit.o \
			ft_isprint.o \
			ft_putchar.o \
			ft_putstr.o \
			ft_strcmp.o \
			ft_strcpy.o \
			ft_strdup.o \
			ft_strlen.o \
			ft_strrev.o \
			ft_tolower.o \
			ft_toupper.o

INCLUDES =	-I./includes

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) $(CFLAGS)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)
	rm -rf $(OBJ)