#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2017/08/04 14:53:28 by thuynh            #+#    #+#             *#
#*   Updated: 2017/08/08 11:48:39 by thuynh           ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libftprintf.a

LIBDIR = libft

LIB_HEADER = -I $(LIBDIR)/includes

LIB = $(LIBDIR)/libft.a

LIBFT_O = libft/*.o

INCLUDES = -I ./includes/

OBJDIR = ./objs/

SRCDIR = ./srcs/

FILES = ft_printf \
		parse_out parse_flags get_nbr get_wflags get_values \
		check_format check_valid f_exists \
		convert_lflags reset_lflags \
		replace prec_calc prec_fill reset_prec \
		put_plus put_wflags reset_wflags \
		get_output di_output

SRCS = $(patsubst %, %.c, $(FILES))

OBJS = $(addprefix $(OBJDIR), $(SRCS:.c=.o))

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT_O)
	@ar rcs $(NAME) $(OBJS) $(LIBFT_O)

objs:
	@mkdir -p $(OBJDIR)

$(OBJDIR)%.o: $(SRCDIR)%.c | objs
	@gcc $(FLAGS) $(INCLUDES) -o $@ -c $^

$(LIBFT_O):
	@make re -C $(LIBDIR)

clean:
	@$(MAKE) clean -C $(LIBDIR)
	@rm -rf $(OBJDIR)

fclean:
	@$(MAKE) clean
	@$(MAKE) fclean -C $(LIBDIR)
	@rm -rf $(NAME)

re: fclean all

test: $(NAME)
	@gcc $(FLAGS) $(INCLUDES) $(NAME) main.c -o test
	@./test
