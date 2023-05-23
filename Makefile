# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/18 09:28:12 by edcastro          #+#    #+#              #
#    Updated: 2023/05/18 09:28:17 by edcastro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(wildcard ./*.c)

FLAGS = -Wall -Wextra -Werror -g3

all: $(NAME)

$(NAME):
	cc $(FLAGS) -c $(SRC)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
