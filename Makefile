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

NAME := libft.a
OBJ = $(FTS:%.c=%.o)
BOBJ = $(BFTS:%.c=%.o)

BFTS:=  ft_lstadd_back.c ft_lstdelone.c  ft_lstadd_front.c ft_lstiter.c ft_lstnew.c ft_lstclear.c ft_lstlast.c ft_lstsize.c ft_lstmap.c


FTS := ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strdup.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_memcpy.c ft_memcmp.c ft_memchr.c ft_strchr.c ft_memmove.c ft_strrchr.c ft_calloc.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_itoa.c ft_striteri.c ft_strmapi.c ft_strjoin.c ft_substr.c ft_strtrim.c ft_split.c


%.o : %.c
	cc -c -Wall -Wextra -Werror $< -I . -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $^

clean :
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(BOBJ)

$(BOBJ): 
	cc -Wall -Wextra -Werror -c $(@:.o=.c) -o $@
	ar -rcs $(NAME) $@
	