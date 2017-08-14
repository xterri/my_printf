#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2017/08/07 11:01:10 by thuynh            #+#    #+#             *#
#*   Updated: 2017/08/13 17:08:25 by thuynh           ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libft.a

SRCS = ft_digits.c ft_memset.c ft_strchr.c ft_strcmp.c ft_strncmp.c \
	   ft_strlen.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_itoa_base.c \
	   ft_strnew.c ft_bzero.c ft_memalloc.c ft_wcslen.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -c -I includes/ $(SRCS)
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
