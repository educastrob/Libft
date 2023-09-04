# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/09 19:42:00 by eduardo           #+#    #+#              #
#    Updated: 2023/06/15 17:14:57 by edcastro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# colors
GREEN := \033[0;32m
YELLOW := \033[0;33m

# variables
NAME := libft.a
OBJ = $(FTS:%.c=%.o)
BOBJ = $(BFTS:%.c=%.o)

# files
BFTS:=  $(wildcard bonus/*.c)
FTS := $(wildcard mandatory/*.c)

# rules
%.o : %.c
	@cc -c -Wall -Wextra -Werror $< -I . -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(GREEN)Successfully Compiled!"

clean:
	@rm -f $(OBJ) $(BOBJ)
	@echo "$(YELLOW)Was Cleaned!"

fclean: clean
	@rm -f $(NAME)

re: fclean all

bonus: $(BOBJ)
	@echo "$(GREEN)Bonus Successfully Compiled!"

.PHONY: all clean fclean re bonus