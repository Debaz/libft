#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klescaud <klescaud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/04 21:24:16 by klescaud          #+#    #+#              #
#    Updated: 2015/05/04 18:36:54 by klescaud         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = 		libft.a

SRCS =		

CFLAGS = 	-Wall -Wextra -Werror $(INCLUDES)

OBJ =		

INCLUDES =	-I./includes

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) $(CFLAGS)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all