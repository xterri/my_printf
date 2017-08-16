/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 14:21:15 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/16 16:20:46 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		f_output(t_print **list)
{
	char	*flt;
	char	*tmp;
	ssize_t	i;
	ssize_t	f_len;

	i = -1;
	!P ? PNB = 6 : 0;
	VAL_DBL += PNB ? get_round_nbr(PNB) : 0;
	tmp = ITOA((uintmax_t)VAL_DBL, U_STR, 10);
	f_len = ft_strlen(tmp) + PNB;
	flt = ft_strnew(f_len);
	while (tmp[++i])
		flt[i] = tmp[i];
	free_str(&tmp);
	PNB ? flt[i] = '.' : 0;
	while (++i <= f_len && PNB)
	{
		VAL_DBL -= (uintmax_t)VAL_DBL;
		VAL_DBL *= 10;
		flt[i] = (uintmax_t)VAL_DBL + '0';
	}
	MIN = MIN > f_len ? MIN - f_len : 0;
	minus_flag_f(list, flt, VAL_DBL);
	free_str(&flt);
	return (1);
}
