#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2017/08/04 14:53:28 by thuynh            #+#    #+#             *#
#*   Updated: 2017/08/15 14:24:08 by thuynh           ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libftprintf.a

LIBDIR = libft

LIB_HEADER = -I $(LIBDIR)/includes

LIB = $(LIBDIR)/libft.a

LIBFT_O = libft/*.o

INCLUDES = -I ./includes/
INCLUDES += -I ./libft/includes/

OBJDIR = ./objs/

SRCDIR = ./srcs/

FILES = ft_printf \
		parse_out parse_flags \
		get_nbr get_wflags get_star_value get_values \
		check_format f_exists \
		reset_lflags \
		replace prec_calc prec_calc_s prec_fill reset_prec \
		put_plus put_wflags  reset_wflags \
		minus_flag_di minus_flag_uox minus_flag_s \
		pf_itoa_base free_str \
		get_output c_output s_output pt_output p_output di_output \
		o_output u_output x_output f_output ls_output

SRCS = $(patsubst %, %.c, $(FILES))

OBJS = $(addprefix $(OBJDIR), $(SRCS:.c=.o))

FLAGS = -Wall -Werror -Wextra -Wno-format

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
	@make clean -C $(LIBDIR)
	@rm -rf $(OBJDIR)

fclean: clean
	@make fclean -C $(LIBDIR)
	@rm -rf $(NAME)

re: fclean all

test: re $(NAME)
	@gcc $(FLAGS) $(INCLUDES) $(NAME) main.c -o test
	@./test
