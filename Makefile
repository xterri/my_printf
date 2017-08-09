#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2017/08/04 14:53:28 by thuynh            #+#    #+#             *#
#*   Updated: 2017/08/04 22:08:04 by thuynh           ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libftprintf.a

LIBDIR = libft

LIB = $(LIBDIR)/libft.a

LIBFT_O = libft/*.o

SRCDIR = srcs

FILES = ft_printf parse_out parse_flags get_wflags get_nbr get_values \
		check_format check_valid flag_exists get_output

HEADER = -I $(LIBDIR)/includes includes

SRCS = $(patsubst %, %.c, $(SRCDIR)/$(FILES))

OBJS = $(patsubst %, %.o, $(SRCDIR)/$(FILES))

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT_O)
	@ar rcs $(NAME) $(OBJS) $(LIBFT_O)

%.o: %c
	@gcc $(FLAGS) $(HEADER) -o $@ -c $<

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
	@gcc $(FLAGS) $(HEADER) $(NAME) main.c -o test
	@./test
