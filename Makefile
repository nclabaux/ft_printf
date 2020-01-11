# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/04 15:00:03 by nclabaux          #+#    #+#              #
#    Updated: 2020/01/08 18:30:18 by nclabaux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c math_tools.c character.c string.c pointeur.c integer.c\
	unsigned_integer.c min_hexa.c max_hexa.c tools.c\
	libft/ft_memset.c libft/ft_bzero.c libft/ft_memcpy.c libft/ft_memccpy.c\
	libft/ft_memmove.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_strlen.c\
	libft/ft_isalpha.c libft/ft_isdigit.c libft/ft_isalnum.c libft/ft_isascii.c\
	libft/ft_isprint.c libft/ft_toupper.c libft/ft_tolower.c libft/ft_strchr.c\
	libft/ft_strrchr.c libft/ft_strncmp.c libft/ft_strlcpy.c libft/ft_strlcat.c\
	libft/ft_strnstr.c libft/ft_atoi.c libft/ft_calloc.c libft/ft_strdup.c\
	libft/ft_substr.c libft/ft_strjoin.c libft/ft_strtrim.c libft/ft_split.c\
	libft/ft_itoa.c libft/ft_strmapi.c libft/ft_putchar_fd.c\
	libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c\
	libft/ft_convert_base/ft_convert_base.c\
	libft/ft_convert_base/ft_convert_base2.c
OBJS = $(SRCS:.c=.o)
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
	@ar -rc $(NAME) $(OBJS)
	@ranlib $(NAME)

all: $(NAME)

clean:
	@$(RM) $(OBJS) $(OBJSBONUS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
