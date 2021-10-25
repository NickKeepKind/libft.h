# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile1                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kreginal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/23 15:32:30 by kreginal          #+#    #+#              #
#    Updated: 2021/10/24 18:26:45 by kreginal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDE = libft.h

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
LIB = ar -rcs

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	  ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c \
	  ft_memmove.c ft_memset.c ft_split.c ft_strchr.c ft_strdup.c \
	  ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
	  ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	  ft_strtrim.c ft_strmapi.c \

.c.o: $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean res
