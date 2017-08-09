#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2017/08/04 14:53:28 by thuynh            #+#    #+#             *#
#*   Updated: 2017/08/04 14:58:58 by thuynh           ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libftprintf.a

LIBDIR = libft

LIB_HEADER = -I $(LIBDIR)/includes

LIB = $(LIBDIR)/libft.a

LIBFT_O = libft/*.o

FILES = ft_printf

SRCS = $(patsubst %, %.c, $(FILES))

OBJS = $(patsubst %, %.o, $(FILES))

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT_O)
	@ar rcs $(NAME) $(OBJS) $(LIBFT_O)

%.o: %c
	@gcc $(FLAGS) $(LIB_HEADER) -o $@ -c $<

$(LIBFT_O):
	@make re -C $(LIBDIR)

clean:
	@$(MAKE) clean -C $(LIBDIR)
	@rm -rf $(OBJS)

fclean:
	@$(MAKE) clean
	@$(MAKE) fclean -C $(LIBDIR)
	@rm -rf $(NAME)

re: fclean all

test: $(NAME)
	@gcc $(FLAGS) $(LIB_HEADER) $(NAME) main.c -o test
	@./test
