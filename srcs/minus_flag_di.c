/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus_flag_di.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:06:58 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/11 10:15:58 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	minus_flag_di(t_print **list, intmax_t val)
{
	val = put_plus(list, val);
	P ? prec_fill(list, PNB) : 0;
	ft_putnbr(val);
}
